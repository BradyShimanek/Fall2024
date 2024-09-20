
#include <iostream>
using namespace std;


void swap(int& x, int& y) {
    // the '&' turns this into a 'Pass by Reference' call.
    // this will make our reference to x
    cout << "in swap: x = " << x << ", y = " << y << endl;
    int tmp;
    tmp = x;
    x = y;
    y = tmp;
    
    cout << "in swap: x = " << x << ", y = " << y << endl;
}

int main(void) {
    
    int a = 6;
    int b = 9;

    cout << "in main: a = " << a << ", b = " << b << endl;

    swap(a, b);
    
    cout << "in main: a = " << a << ", b = " << b << endl;

return 0;
}




