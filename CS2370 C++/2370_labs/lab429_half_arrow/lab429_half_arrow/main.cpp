//
//  main.cpp
//  lab429_half_arrow
//
//  Created by Brady Shimanek on 9/9/24.
//

#include <iostream>
using namespace std;

int main() {
    int height; // arrow base height
    int width;  // arrow base width
    int arrowWidth;
    
    cin >> height;
    cin >> width;
    
    // checks that arrowWidth is greater than the base width
    do {
        cin >> arrowWidth;
    } while (arrowWidth <= width);
    
    
    // loops to create the arrow base rectangle
    for (int h = 0; h < height; h++) {
        for (int w = 0; w < width; w++) {
            cout << "*";
        }
        cout << endl;
    }
    
    
    // loops to create the arrow head. decrementing the width by 1 each loop
    for (int a = 0; a < arrowWidth; a++) {
        for (int b = 0; b < (arrowWidth - a); b++) {
            cout << "*";
        }
        cout << endl;
    }
    
    
    return 0;
}
