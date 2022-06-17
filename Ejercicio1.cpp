#include <stdio.h>
#include <iostream>
#include <math.h>
// PROBLEMA NUMERO UNO PRACTICA 1
// IDENTIFICAR SI UN CARACTER INGRESADO ES UNA VOCAL, UNA CONSONANTE O NINGUNA DE LAS DOS

using namespace std;

int main()
{
    char c[1]; int i = 0;
    
    cout<< "Ingrese un caracter \n"<<endl;  cin>>c;
    while(c[i]!='\0')
    {
        if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u'||c[i]=='A'||c[i]=='E'||c[i]=='I'||c[i]=='O'||c[i]=='U')
        {
            cout<<"Es una vocal:  "<<c[i]<<endl;
            break;
        }
        else if(c[i]=='q'||c[i]=='w'||c[i]=='r'||c[i]=='t'||c[i]=='y'||c[i]=='p'||c[i]=='s'||c[i]=='d'||c[i]=='f'||c[i]=='g'||c[i]=='h'||c[i]=='j'||c[i]=='k'||c[i]=='l'||c[i]=='z'||c[i]=='x'||c[i]=='c'||c[i]=='v'||c[i]=='b'||c[i]=='n'||c[i]=='m'||c[i]=='Q'||c[i]=='W'||c[i]=='R'||c[i]=='T'||c[i]=='Y'||c[i]=='P'||c[i]=='S'||c[i]=='D'||c[i]=='F'||c[i]=='G'||c[i]=='H'||c[i]=='J'||c[i]=='K'||c[i]=='L'||c[i]=='Z'||c[i]=='X'||c[i]=='C'||c[i]=='V'||c[i]=='V'||c[i]=='N'||c[i]=='M')                                                              
        {
            cout<<"Es una consonante:  "<<c[i]<<endl;
            break;
        } 
        else
        {
            cout<<"Ninguna de las dos  "<<c[i]<<endl;
            break;
        }    
    }


    return 0;
}