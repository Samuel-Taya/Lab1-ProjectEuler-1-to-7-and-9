//The terms in the Fibonacci sequence whose values do not exceed four million, FIND the sum of the even-valued terms
#include <iostream>

using namespace std;

int sumFibonacci()
{
	int n, numpar, suma=0;
    long long int num_ant=1, num_sig=1, nue_num=1;
    
    for(n=0;n<33;n++)
	{          
        num_ant=num_sig;
        num_sig=nue_num;
        nue_num=num_ant+num_sig;
        
        if(num_sig<4000000)
		{
            numpar=num_sig%2;
            
            if(numpar==0)
			{
                suma+=num_sig;
            }
        }
        else
        	break;
    }
    return suma;
}
int main()
{
    cout << "Respuesta: " << sumFibonacci() << endl;
    
	return 0;
}
