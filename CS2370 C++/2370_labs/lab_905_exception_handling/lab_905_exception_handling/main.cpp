#include <string>
#include <iostream>
#include <ios>  // For ios_base::failure

using namespace std;

int main() {
    string inputName;
    int age;
    
    // Set exception mask for cin stream
    cin.exceptions(ios::failbit);
    
    cin >> inputName;
    while (inputName != "-1") {
        try {
            // Try to read the age. This may throw an ios_base::failure exception.
            cin >> age;
            cout << inputName << " " << (age + 1) << endl;  // Increment the age and print
        } catch (ios_base::failure& e) {
            // If an exception is thrown (e.g., a string is entered instead of an int), handle it here.
            
            // Clear failbit to reset cin so it can be used again
            cin.clear();
            
            // Throw away the rest of the failed input line from the cin buffer
            string garbage;
            getline(cin, garbage);
            
            // Output the name with age as 0 (since the input was invalid)
            cout << inputName << " 0" << endl;
        }

        // Read the next name
        cin >> inputName;
    }

    return 0;
}
