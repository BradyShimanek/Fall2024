#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <string>
using namespace std;


void PrintMenu();
void ExecuteMenu(char choice, string &userStr);
int GetNumOfNonWSCharacters(const string &userStr);
int GetNumOfWords(const string &userStr);
int FindText(const string &searchText, string &userStr);
void ReplaceExclamation(string &userStr);
void ShortenSpace(string &userStr);

int main() {
    string userStr;
    char userChoice = ' ';

    cout << "Enter a sample text:" << endl;
    getline(cin, userStr);
    cout << endl;
    cout << "You entered: " << userStr << endl;
    cout << endl;

    while (userChoice != 'q') {
        PrintMenu();
        cout << "Choose an option:" << endl;
        cin >> userChoice;
        if (userChoice == 'c' || userChoice == 'w' || userChoice == 'f' || userChoice == 'r' || userChoice == 's')
        {
            ExecuteMenu(userChoice, userStr);
        }
        else if (userChoice == 'q')
        {
            break;
        }
    }

   return 0;
}

void PrintMenu() {
    cout << "MENU" << endl;
    cout << "c - Number of non-whitespace characters" << endl;
    cout << "w - Number of words" << endl;
    cout << "f - Find text" << endl;
    cout << "r - Replace all !'s" << endl;
    cout << "s - Shorten spaces" << endl;
    cout << "q - Quit" << endl;
    cout << endl;
}

void ExecuteMenu(char choice, string &userStr) {
    if (choice == 'c') {
        int nonWSCount = GetNumOfNonWSCharacters(userStr);
        cout << "Number of non-whitespace characters: " << nonWSCount << endl;
        cout << endl;
    }
    else if (choice == 'w') {
        int wordCount = GetNumOfWords(userStr);
        cout << "Number of words: " << wordCount << endl;
        cout << endl;
    }
    else if (choice == 'f') {
        string textToFind;
        cout << "Enter a word or phrase to be found:" << endl;
        cin.ignore(1000, '\n');
        getline(cin, textToFind);
        
        int textOccurences = FindText(textToFind, userStr);
        cout << "\"" << textToFind << "\" instances: " << textOccurences << endl;
        cout << endl;
    }
    else if (choice == 'r') {
        ReplaceExclamation(userStr);
        cout << "Edited text: " << userStr << endl;
        cout << endl;
    }
    else if (choice == 's') {
        ShortenSpace(userStr);
        cout << "Edited text: " << userStr << endl;
        cout << endl;
    }
}

int GetNumOfNonWSCharacters(const string &userStr) {
    int charCounter = 0;
    int i;
    
    for (i = 0; i < userStr.length(); i++) {
        if (!isspace(userStr.at(i))) {
            charCounter++;
        }
    }
    
    return charCounter;
}
    
int GetNumOfWords(const string &userStr) {
    int wordCounter = 0;
    int i;
    bool inWord = false;
    
    for (i = 0; i < userStr.length(); i++) {
        
        if (!isspace(userStr.at(i)) && inWord == false) {
            wordCounter++;
            inWord = true;
        }
        else if (isspace(userStr.at(i)) && inWord == true) {
            inWord = false;
        }
    }
    return wordCounter;
}
    
int FindText(const string &searchText, string &userStr) {
    int phraseCount = 0;
    size_t startIndex = 0;
    
    while ((startIndex = userStr.find(searchText, startIndex)) != string::npos) {
        phraseCount++;
        startIndex += searchText.length();
    }

    return phraseCount;
}

void ReplaceExclamation(string &userStr) {
    int i;
    
    for (i = 0; i < userStr.length(); i++) {
        if (userStr.at(i) == '!') {
            userStr.at(i) = '.';
        }
    }
}

void ShortenSpace(string &userStr) {
    string result;
    bool inSpace = false;
    
    for (char c : userStr) {
        if (isspace(c)) {
            if (!inSpace) {
                result += ' ';
                inSpace = true;
            }
        } else {
            result += c;
            inSpace = false;
        }
    }
    
    userStr = result;
}
