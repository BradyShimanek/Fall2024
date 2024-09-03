//
//  main.cpp
//  lab_329
//
//  Created by Brady Shimanek on 9/2/24.
//


#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstName;
    string middleName;
    string lastName;
    
    cout << "Enter your first, middle and last name: " << endl;
    
    cin >> firstName;
    cin >> lastName;
    if (cin >> middleName) {
        string firstInitial = firstName[0] + string(".");
        string lastInitial = lastName[0] + string(".");
        
        cout << middleName << ", " << firstInitial <<  lastInitial << endl;
    } else {
        string firstInitial = firstName[0] + string(".");
        cout << lastName << ", " << firstInitial << endl;
    }
    
    string firstInitial = firstName[0] + string(".");
    string middleInitial = middleName[0] + string(".");
    
    

   return 0;
}

// The logic of this doesn't work here but for some reason if I copy and paste this into ZyLabs it works?? I don't know. 
