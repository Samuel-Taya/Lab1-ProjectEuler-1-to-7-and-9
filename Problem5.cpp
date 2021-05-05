// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20
#include <iostream>
#include <math.h>
using namespace std;

int divisible(int num[])
{
	// sacamos los factores minimos en cada elemento del arreglo a partir del numero 4 en base a los anteriores
	for (int i=2; i<20; i++)
	{
		for (int j=1; j<i; j++)
        {
            if (num[i] % num[j] == 0)
            {
                num[i] = num[i] / num[j];
            }	
        }
	}
	
	// multiplicamos el arreglo anterior
	int times= 1;
	for (int i=0; i<20; i++)
	{   
        times = times * num[i];
	}
	return times;
}

int main()
{
	// creamos un arreglo con los numeros de 1 al 20
	int numeros[20];
	 
	for (int i=0;i<20; i++)
    {
        numeros[i] = i+1;
    }
	
	cout<< divisible(numeros) << endl;

    return 0;
}
