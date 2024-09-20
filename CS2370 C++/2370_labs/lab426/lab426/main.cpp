//
//  main.cpp
//  lab426
//
//  Created by Brady Shimanek on 9/9/24.
//

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string userInput;
    getline(cin, userInput);
    
    int left = 0;
    int right = userInput.size() - 1;
    
    while (left < right) {

        while (left < right && isspace(userInput.at(left))){
            left++;
        }

        while (left < right && isspace(userInput.at(right))){
            right--;
        }

        if (tolower(userInput.at(left)) != tolower(userInput.at(right))) {
            cout << "not a palindrome" << endl;
            return 0;
        }
        
        left++;
        right--;
    }


    cout << "palindrome!" << endl;

    return 0;
}
