#include <iostream>
#include "iprecision.h"    // from Henrik Vestermask's arbitrary precision package
using namespace std;

// Returns 2^exp - 1
int_precision Number(unsigned short int exp)
{
   int_precision number = 2;
   for (unsigned short int i = 1; i < exp; i++)
      number *= 2;
   
   number--;
   return number;
}

// Performs LL test for exp if exp is odd
bool LL(unsigned short int exp)
{
   if (exp%2 == 0)
      return exp == 2;

   int_precision number = Number(exp);
   int_precision s = 4;

   while(exp > 2)
   {
      s = (s*s - int_precision(2))%number;
      exp--;
   }

   return s == 0;
}

int main()
{
   unsigned short int exponent;
   cout << "Type an exponent (type 7 for 2⁷-1), and press Enter: ";
   cin >> exponent;
   cout << "2^" << exponent << "-1 is ";
   if (LL(exponent))
      cout << "prime" << endl;
   else
      cout << "not prime" << endl;
}
