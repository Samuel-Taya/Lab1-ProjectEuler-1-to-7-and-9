// the largest prime factor of the number 600851475143
#include <iostream>
#include <math.h>
using namespace std;

void primeFactors(long long int n) 
{ 
    while (n%2 == 0) // si se puede dividir en 2
    { 
        cout << 2 << " "; 
        n = n/2; 
    } 
  
    for (int i=3; i <= sqrt(n); i=i+2) 
    { 
        while (n%i == 0) 
        { 
            cout << i << " "; 
            n = n/i; 
        } 
    } 
  
    if (n>2) // cuando es un numero primo mas grande que 2
        cout << n << " "; 
} 
  
int main() 
{ 
    long long int n = 9;//600851475143; 
    primeFactors(n); 
    return 0; 
} 
