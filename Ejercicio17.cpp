#include <stdio.h>
#include <iostream>
#include <math.h>
// PROBLEMA NUMERO 17 PRACTICA 1
// NÚMEROS TRIANGULARES

using namespace std;
int n;

int main()
{
    int num; int i = 1; int r = 0; int k = 1;
    
    cout<< "Tope de numeros triangulares: \n"<<endl;  cin>>num;
    cout<<""<<endl;

    while(i <= num)
    {   
        
        r = (i*(i+1)/2);
        cout<<"El numero: "<<r<<" cuenta con los siguientes divisores: "<<endl;
        cout<<""<<" --> ";
        
        for(int k = 1; k <= r; k++)
        {

            if(r % k == 0)
            {
                cout<<" "<<k;
            }
        }

        cout<<endl;
        i++;
    }
    return 0;
}


