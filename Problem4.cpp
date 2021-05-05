// largest palindrome made from the product of two 3-digit numbers.
#include <iostream>
#include <math.h>
using namespace std;

bool palindromo(int n)
{
    int num = n;
    int inv = 0;
    
    // operacion para invertir el numero
    while (num>0) 
    {
        inv = inv * 10 + num % 10; // obtiene el ultimo digito
        num = num / 10; // elimina el ultimo digito
    }

    if (inv == n)
        return true;
    return false;
}

int main()
{
    int num, aux;
    num = 0;

    for (int i=100; i<1000; i++) // numeros de 3 digitos
    {
        for (int j=100; j<1000; j++)
        {
            aux = i*j;
            
            if (palindromo(aux) && aux>num) // aux>num para hallar el palindromo mas grande
                num=aux;
           }
    }

    cout<<num;

    return 0;
}
