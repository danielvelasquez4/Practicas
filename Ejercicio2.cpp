#include <stdio.h>
#include <iostream>
#include <math.h>
// PROBLEMA NUMERO DOS PRACTICA 1
//MÍNIMA COMBINACIÓN DE BILLETES Y MONEDAS PARA UNA CANTIDAD DE DINERO DETERMINADA

using namespace std;

 
int main()
{
    int N; int resultado; int resto; int veinte; int diez; int cinco; int dos; int mil; int quin; int dosci; int cien; int cink;
    
    cout<< "Ingrese un numero \n"<<endl;  cin>>N;
    resultado = N/50000;
    resto = N%50000;
    cout<<" 50.000 : "<<resultado<<endl;


    veinte = resto/20000;
    resto = resto%20000;
    cout<<" 20.000 : "<<veinte<<endl;

    diez = resto/10000;
    resto = resto%10000;
    cout<<" 10.000 : "<<diez<<endl;    

    cinco = resto/5000;
    resto = resto%5000;
    cout<<" 5.000  : "<<cinco<<endl;      

    dos = resto/2000;
    resto = resto%2000;
    cout<<" 2.000  : "<<dos<<endl;

    mil = resto/1000;
    resto = resto%1000;
    cout<<" 1.000  : "<<mil<<endl;  

    quin = resto/500;
    resto = resto%500;
    cout<<" 500    : "<<quin<<endl; 

    dosci = resto/200;
    resto = resto%200;
    cout<<" 200    : "<<dosci<<endl; 

    cien = resto/100;
    resto = resto%100;
    cout<<" 100    : "<<cien<<endl; 

    cink = resto/50;
    resto = resto%50;
    cout<<" 50     : "<<cink<<endl;

    cout<<" Faltante   : "<<resto<<endl;
    
    return 0;
}


