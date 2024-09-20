#include <iostream>
using namespace std;

/* Output the Fibonacci sequence step-by-step.
   Fibonacci sequence starts as:
   0 1 1 2 3 5 8 13 21 ... in which the first
   two numbers are 0 and 1 and each additional
   number is the sum of the previous two numbers
*/

//void ComputeFibonacci(int fibNum1, int fibNum2, int runCnt) {
//   
//   cout << fibNum1 << " + " << fibNum2 << " = "
//        << fibNum1 + fibNum2 << endl;
//   
//   if (runCnt <= 1) { // Base case: Ran for user specified
//                      // number of steps, do nothing
//   }
//   else {            // Recursive case: compute next value
//      ComputeFibonacci(fibNum2, fibNum1 + fibNum2, runCnt - 1);
//   }
//}
//
//int main() {
//   int runFor;      // User specified number of values computed
//   
//   // Output program description
//   cout << "This program outputs the" << endl
//   << "Fibonacci sequence step-by-step," << endl
//   << "starting after the first 0 and 1." << endl << endl;
//   
//   // Prompt user for number of values to compute
//   cout << "How many steps would you like? ";
//   cin >> runFor;
//   
//   // Output first two Fibonacci values, call recursive function
//   cout << "0" << endl << "1" << endl;
//   ComputeFibonacci(0, 1, runFor);
//   
//   return 0;
//}







// *********** GCD Calculator *********** :



/* Determine the greatest common divisor
   of two numbers, e.g. GCD(8, 12) = 4
*/
int GCDCalculator(int inNum1, int inNum2) {
   int gcdVal;     // Holds GCD results
   
   if(inNum1 == inNum2) {    // Base case: Numbers are equal
      gcdVal = inNum1;       // Return value
   }
   else {                    // Recursive case: subtract smaller from larger
      if (inNum1 > inNum2) { // Call function with new values
         gcdVal = GCDCalculator(inNum1 - inNum2, inNum2);
      }
      else {
         gcdVal= GCDCalculator(inNum1, inNum2 - inNum1);
      }
   }
   
   return gcdVal;
}

int main() {
   int gcdInput1;     // First input to GCD calc
   int gcdInput2;     // Second input to GCD calc
   int gcdOutput;     // Result of GCD
   
   // Print program function
   cout << "Program outputs the greatest \n"
        << "common divisor of two numbers." << endl;
   
   // Prompt user for input
   cout << "Enter first number: ";
   cin >> gcdInput1;
   
   cout << "Enter second number: ";
   cin >> gcdInput2;
   
   // Check user values are > 1, call recursive GCD function
   if ((gcdInput1 < 1) || (gcdInput2 < 1)) {
      cout << "Note: Neither value can be below 1." << endl;
   }
   else {
      gcdOutput = GCDCalculator(gcdInput1, gcdInput2);
      cout << "Greatest common divisor = " << gcdOutput << endl;
   }
   
   return 0;
}
