#include <iostream>
using namespace std;

struct ElapsedDecadesYears {
   int decadesVal;
   int yearsVal;
};

ElapsedDecadesYears ConvertToDecadesAndYears(int totalYears) {
   ElapsedDecadesYears tempVal;

    tempVal.decadesVal = totalYears / 10;
    tempVal.yearsVal = totalYears % 10;

    return tempVal;
}

int main() {
   ElapsedDecadesYears elapsedYears;
   int totalYears;

   cin >> totalYears;

   elapsedYears = ConvertToDecadesAndYears(totalYears);

   cout << elapsedYears.decadesVal << " decades and " << elapsedYears.yearsVal << " years" << endl;

   return 0;
}
