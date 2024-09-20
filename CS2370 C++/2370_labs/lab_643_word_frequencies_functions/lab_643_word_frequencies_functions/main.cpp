#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;


string toLowercase(const string& str) {
    string lowerStr = str;
    for (size_t i = 0; i < lowerStr.length(); ++i) {
        lowerStr[i] = tolower(lowerStr[i]);
    }
    return lowerStr;
}

int GetWordFrequency(const vector<string>& wordsList, const string& currWord) {
    int count = 0;
    string lowerSearchWord = toLowercase(currWord);
    
    for (const string& word : wordsList) {
        string lowerWord = toLowercase(word);
        
        if (lowerWord == lowerSearchWord) {
            ++count;
        }
    }
    return count;
}

int main() {
    int numWords;
//    cout << "Enter the number of words: ";
    cin >> numWords;
    
    vector<string> words(numWords);
    
//    cout << "Enter " << numWords << " words: " << endl;
    for (int i = 0; i < numWords; ++i) {
        cin >> words[i];
    }
    
    for (const string& word : words) {
        int frequency = GetWordFrequency(words, word);
        cout << word << " " << frequency << endl;
    }
   return 0;
}
