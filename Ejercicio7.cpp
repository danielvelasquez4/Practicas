#include <stdio.h>
#include <iostream>
#include <math.h>
// PROBLEMA NUMERO 7 PRACTICA 1
// FIBONACCI Y SUMA DE SUS PARES


using namespace std;

 
int main()
{
    int e, x = 0, y = 1, z = 1, r1 = 0, r2 = 0, r3 = 0, r4 = 0, total, raux = 0;
    
    cout<< "Numero de elementos \n"<<endl;  cin>>e;

    cout<<"1 ";
    for(int i = 0; i <= e ; i++)
    {
        z = x + y;

        x = y;
        while(x % 2 == 0)
        {
            r1 = x;
            r2 = r2 + r1;
            break;  
        }

        y = z;
        cout<<z<<" ";

    }
    if(z % 2 == 0)
    {
        raux = z;
    }
    else
    {

    }
    total = r2 + raux;
    cout<<"\n";
    cout<<"Total: "<<total<<endl;
    return 0;
}