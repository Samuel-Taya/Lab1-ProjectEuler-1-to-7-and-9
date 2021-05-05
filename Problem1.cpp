// sum of all the multiples of 3 or 5 below 1000
#include<iostream>
using namespace std;

int multiples()
{
	int i,m3,m5,suma=0;
    for(i=0;i<1000;i++)
	{
        m3=i%3; // se guarda el residuo en m3
        m5=i%5;
        if(m3==0 || m5==0)
		{
            suma+=i;
        }
    }
    return suma;
}
int main()
{
    cout << "Respuesta: " << multiples() << endl;
    return 0;
}


