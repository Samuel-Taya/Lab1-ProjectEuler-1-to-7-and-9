// What is the 10 001st prime number?
#include <math.h>
#include <iostream>
using namespace std;

int primeNumber(int ordinal)
{
	int contfac=0, contP=0, n = 2;
	
    while (contP < ordinal)
    {
        for(int i=1;i<=sqrt(n);i++)
        {
            if(n%i==0)
			{
				contfac++;
			}
			
            if(contfac>1)
			{
				break;
			}
        }
        if(contfac==1) // si solo tiene un factor primo
		{
			contP++;
		}
        contfac = 0;
        n++;
    }
    
    return n-1;
}

int main()
{
	cout << primeNumber(10001);
	
    return 0; 
}
