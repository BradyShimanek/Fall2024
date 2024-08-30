//
//  main.cpp
//  chpt2
//
//  Created by Brady Shimanek on 8/28/24.
//


// practice for using 'double' declaration s for floating point values:

//#include <iostream>
//using namespace std;
//
//int main() {
//   double milesTravel; // User input of miles to travel
//   double hoursFly;    // Travel hours if flying those miles
//   double hoursDrive;  // Travel hours if driving those miles
//   
//   cout << "Enter miles to travel: ";
//   cin  >> milesTravel;
//   
//   hoursFly   = milesTravel / 500.0; // Plane flies 500 mph
//   hoursDrive = milesTravel / 60.0;  // Car drives 60 mph
//   
//   cout << milesTravel << " miles would take:" << endl;
//   cout << "   " << hoursFly << " hours to fly" << endl;
//   cout << "   " << hoursDrive << " hours to drive" << endl;
//   
//   return 0;
//}


// Messing around with implicit conversion
#include <iostream>
using namespace std;

int main() {
   double number;
   double newNumber;
   
   number = 4.5;
   newNumber = number * 3;
   
   cout << newNumber << endl;
   
   return 0;
}
