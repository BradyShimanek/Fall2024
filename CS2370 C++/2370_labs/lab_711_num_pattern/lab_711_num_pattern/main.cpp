#include <iostream>

using namespace std;

// TODO: Write recursive PrintNumPattern() function


int PrintNumPattern(int int1, int int2) {
    int numResult;
        
    if (int1 < 0)
    {
        numResult = int1;
    }
    
    else
    {
        cout << int1 << " ";
        numResult = int2 + PrintNumPattern(int1 - int2, int2);
    }
    cout << numResult << " ";
    return numResult;
}

int main() {
   int num1;
   int num2;

   cin >> num1;
   cin >> num2;
   PrintNumPattern(num1, num2);
   
   return 0;
}

// hail yeah I did this without any code given to me
// just some old programs, instructions clarification,
// and Python visualizer
