//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//void FindMiddle(vector<string> statesData, int startIndex, int endIndex) {
//   int midIndex;
//   int rangeSize;
//   
//   rangeSize = (endIndex - startIndex) + 1;
//   midIndex = (startIndex + endIndex) / 2;
//
//   cout << "Number of elements in the range: " << rangeSize << endl;
//   cout << "Middle index: " << midIndex << endl;
//   cout << "Element at middle index: " << statesData.at(midIndex) << endl;
//}
//
//int main() {
//   vector<string> dataList;
//   int numData;
//   int i;
//   string item;
//
//   cin >> numData;
//   for (i = 0; i < numData; ++i) {
//      cin >> item;
//      dataList.push_back(item);
//   }
//   FindMiddle(dataList, 0, dataList.size() - 1);
//
//   return 0;
//}

//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
///* Finds index of string in vector of strings, else -1.
//   Searches only with index range low to high
//   Note: Upper/lower case characters matter
//*/
//
//int FindMatch(vector<string> stringsList, string itemMatch, int lowVal, int highVal) {
//   int midVal;        // Midpoint of low and high values
//   int itemPos;       // Position where item found, -1 if not found
//   int rangeSize;     // Remaining range of values to search for match
//   
//   rangeSize = (highVal - lowVal) + 1;
//   midVal = (highVal + lowVal) / 2;
//   
//   if (itemMatch == stringsList.at(midVal)) {   // Base case 1: item found at midVal position
//      itemPos = midVal;
//   }
//   else if (rangeSize == 1) {                   // Base case 2: match not found
//      itemPos = -1;
//   }
//   else {                                       // Recursive case: search lower or upper half
//      if (itemMatch < stringsList.at(midVal)) { // Search lower half, recursive call
//         itemPos = FindMatch(stringsList, itemMatch, lowVal, midVal);
//      }
//      else {                                    // Search upper half, recursive call
//         itemPos = FindMatch(stringsList, itemMatch, midVal + 1, highVal);
//      }
//   }
//   
//   return itemPos;
//}
//
//int main() {
//   vector<string> attendeesList(0); // List of attendees
//   string attendeeName;             // Name of attendee to match
//   int matchPos;                    // Matched position in attendee list
//   
//   // Omitting part of program that adds attendees
//   // Instead, we insert some sample attendees in sorted order
//   attendeesList.push_back("Adams, Mary");
//   attendeesList.push_back("Carver, Michael");
//   attendeesList.push_back("Domer, Hugo");
//   attendeesList.push_back("Fredericks, Carlos");
//   attendeesList.push_back("Li, Jie");
//   
//   // Prompt user to enter a name to find
//   cout << "Enter person's name: Last, First: ";
//   getline(cin, attendeeName); // Use getline to allow space in name
//   
//   // Call function to match name, output results
//   matchPos = FindMatch(attendeesList, attendeeName, 0, attendeesList.size() - 1);
//   if (matchPos >= 0) {
//      cout << "Found at position " << matchPos << "." << endl;
//   }
//   else {
//      cout << "Not found. " << endl;
//   }
//   
//   return 0;
//}


#include <iostream>
#include <string>
#include <vector>

using namespace std;

/* Finds index of string in vector of strings, else -1.
   Searches only with index range low to high
   Note: Upper/lower case characters matter
*/
//
int FindMatch(vector<string> stringsList, string itemMatch,
              int lowVal, int highVal, string indentAmt) { // indentAmt used for print debug
   
   int midVal;        // Midpoint of low and high values
   int itemPos;       // Position where item found, -1 if not found
   int rangeSize;     // Remaining range of values to search for match
   
   cout << indentAmt << "Find() range " << lowVal << " " << highVal << endl;
   
   rangeSize = (highVal - lowVal) + 1;
   midVal = (highVal + lowVal) / 2;
   
   if (itemMatch == stringsList.at(midVal)) {   // Base case 1: item found at midVal position
      cout << indentAmt << "Found person." << endl;
      itemPos = midVal;
   }
   else if (rangeSize == 1) {                   // Base case 2: match not found
      cout << indentAmt << "Person not found." << endl;
      itemPos = -1;
   }
   else {                                       // Recursive case: Search lower or upper half
      if (itemMatch < stringsList.at(midVal)) { // Search lower half, recursive call
         cout << indentAmt << "Searching lower half." << endl;
         itemPos = FindMatch(stringsList, itemMatch, lowVal, midVal, indentAmt + "   ");
      }
      else {                                    // Search upper half, recursive call
         cout << indentAmt << "Searching upper half." << endl;
         itemPos = FindMatch(stringsList, itemMatch, midVal + 1, highVal, indentAmt + "   ");
      }
   }

   cout << indentAmt << "Returning pos = " << itemPos << "." << endl;
   return itemPos;
}

int main() {
   vector<string> attendeesList(0); // List of attendees
   string attendeeName;             // Name of attendee to match
   int matchPos;                    // Matched position in attendee list
   
   // Omitting part of program that adds attendees
   // Instead, we insert some sample attendees in sorted order
   attendeesList.push_back("Adams, Mary");
   attendeesList.push_back("Carver, Michael");
   attendeesList.push_back("Domer, Hugo");
   attendeesList.push_back("Fredericks, Carlos");
   attendeesList.push_back("Li, Jie");
   
   // Prompt user to enter a name to find
   cout << "Enter person's name: Last, First: ";
   getline(cin, attendeeName); // Use getline to allow space in name
   
   // Call function to match name, output results
   matchPos = FindMatch(attendeesList, attendeeName, 0,
                        attendeesList.size() - 1, "   ");
   if (matchPos >= 0) {
      cout << "Found at position " << matchPos << "." << endl;
   }
   else {
      cout << "Not found. " << endl;
   }
   
   return 0;
}

// ************* make the input a name that is not being pushed back so you can see the steps on how this program is working^ ***********


//void PrintSmiley(int n) {
//    if (n == 0) {
//        cout << " happy ";
//    }
//    else {
//        cout << "(:";
//        PrintSmiley(n - 1);
//        cout << ":)";
//    }
//}
//
//int main () {
//    int numSmiles;
//    
//    cin >> numSmiles;
//    PrintSmiley(numSmiles);
//    
//    return 0;
//}
