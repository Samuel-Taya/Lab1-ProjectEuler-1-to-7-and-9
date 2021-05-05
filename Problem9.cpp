// There exists exactly one Pythagorean triplet for which a + b + c = 1000.
// Find the product abc.
#include <iostream>
#include <math.h>

using namespace std;

int encontrar(int a,int b,int c)
{
	for(int i=5; i<1000; i++)
	{
		c=i;
		for(int j=4; j<c; j++)
		{
			b=j;
			for(int k=3; k<b; k++)
			{
				a=k;
				if(a*a + b*b ==c*c && a+b+c == 1000)
				{
					return a*b*c;
				}
			}
		}
	}
}

int main()
{
	int a,b,c;
	cout << encontrar(a,b,c) << endl;

	return 0;
}

