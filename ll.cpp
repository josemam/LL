#include <iostream>
using namespace std;

bool TooBig(unsigned short int exp)
{
   return exp > 32;
}

// Returns 2^exp - 1
unsigned long long Number(unsigned short int exp)
{
   unsigned long long number = 2;
   for (unsigned short int i = 1; i < exp; i++)
      number *= 2;
   
   number--;
   return number;
}

// Performs LL test for exp
bool LL(unsigned short int exp)
{
   unsigned long long number = Number(exp);
   unsigned long long s = 4;

   while(exp > 2)
   {
      s = (s*s - 2)%number;
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
   if (TooBig(exponent))
      cout << "too big to be tested" << endl;
   else if (LL(exponent))
      cout << "prime" << endl;
   else
      cout << "not prime" << endl;
}
