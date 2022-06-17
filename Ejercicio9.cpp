#include <stdio.h>
#include <iostream>
#include <math.h>
// PROBLEMA NUMERO 9 PRACTICA 1
// ELEVAR NÚMEROS ASÍ MISMOS Y SUMARLOS
// POR EJEMPLO 1223 SE VA ITERANDO DE TAL MANERA QUE (122,3) TOMEMOS EL ULT NUMERO OPEREMOS Y ASI SUCESIVAMENTE 
using namespace std;

int main()
{
    int n, cifras[10], i = 0, aux = 0, acum = 0;
    
    cout<< "Ingrese un numero: \n"<<endl;  cin>>n;
    while(n > 0)
    {
        cifras[i] = n % 10;
        n = n / 10;
        i++; 
    }
    for(int s = i - 1; s >= 0 ; s--)
    {
        aux = pow(cifras[s],cifras[s]);
        acum = acum + aux;
    }
    cout<<""<<acum<<endl;
    cout<<"\n";
    return 0;
}