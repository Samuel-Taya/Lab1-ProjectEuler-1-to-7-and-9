// Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   int sum1=0, sum2=0;
   int dif;
   
   for(int i=1; i<=100 ;i++)
   {
       sum1 = sum1 + pow(i,2);
       sum2 = sum2 + i;
   }
   sum2 = pow(sum2,2);
     
   dif = sum2-sum1;
   
   cout << "La diferencia es: " << dif;
  
   return 0;
}
