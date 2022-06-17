#include <stdio.h>
#include <iostream>
#include <math.h>
// PROBLEMA NUMERO 13 PRACTICA 1
// RECIBIR UN NUMERO Y CALCULAR LA SUMA DE TODOS LOS PRIMOS MENORES AL NUMERO INGRESADO

using namespace std;

int main()
{
    int n, acum = 0;
    
    cout<< "Ingrese numero tope: \n"<<endl;  cin>>n;
    for(int i = 2; i < n; i++)
    {
        int c = 0;
        for(int j = 2; j <= i/2 ; j++)
        {
            
            if(i % j == 0)
            {
                c++;
                break;
            }
        }

        if(c < 1)
        {
             cout<<i<<" "<<endl;
             acum = acum + i;
        }
    
    }
    cout<<"El resultado de la suma es: "<<acum<<endl;
    return 0;
}