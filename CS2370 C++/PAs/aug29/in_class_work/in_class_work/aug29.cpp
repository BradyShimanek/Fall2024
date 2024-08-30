//
//  main.cpp
//  in_class_work
//
//  Created by Brady Shimanek on 8/29/24.
//

// function practice

//#include <iostream>
//
//using namespace std;
//
//// return_data_type func_name (args)
//
//int ComputeSquare(int num) {
//    return num * num;
//}
//
//int main() {
//    int numSquared;
//   
//    
//    numSquared = ComputeSquare(7);
//    cout << "7 squared is " << numSquared << endl;
//    
//    return 0;
//}


//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int grade;
//    cout << "Please enter your grade: ";
//    cin >> grade;
  //   Example using  if - else statements
    
//    if (grade == 4) {
//        cout << "Excellent" << endl;
//    } else if (grade == 3) {
//        cout << "Good" << endl;
//    } else if (grade == 2) {
//        cout << "Poor" << endl;
//    } else if (grade == 1) {
//        cout << "Failing" << endl;
//    } else {
//        cout << "Illegal Input" << endl;
//    }
//    
    
  //    Example using switch instead
//    switch(grade) {
//        case 4: cout << "Excellent" << endl;
//            break;
//        case 3: cout << "Good" << endl;
//            break;
//        case 2: cout << "Poor" << endl;
//            break;
//        case 1: cout << "Failing" << endl;
//            break;
//        default: cout << "Illegal input" << endl;
//    }
//    
//    return 0;
//}

// for loops
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    //for (initialization; condition; update ) {
//    /* for loop body */
////    }
//    int i;
//    for (i = 0; i < 5; i = i + 1) {
//        cout << i << endl;
//    }
//    return 0;
//}

// while loop
#include <iostream>

using namespace std;

int main() {
    int i;
    i = 0;
    while (i < 5) {
        cout << i << endl;
        i = i + 1; // could also be written as i++
    }
    return 0;
}


