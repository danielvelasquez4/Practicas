#include <stdio.h>
#include <iostream>
#include <math.h>
// PROBLEMA NUMERO CINCO PRACTICA 1
// ESTRELLA CON *
// n - cantidad de lineas / linactual / espacio / aster

using namespace std;

 
int main()
{
    int num; int contador; int n, linactual, espacio, aster, linactual2, espacio2, n2, aster2, ban, ban2;
    
    cout<< "Ingrese un numero impar \n"<<endl;  cin>>num;
    contador = 0;
    n = num + 1;
    n2 = num;


    //SALTOS DE LÍNEA 

    for(linactual = 1; linactual < n/2; linactual++)
    {
        //ESPACIOS

        for(espacio = 0; espacio < (n/2)-linactual ; espacio++)
        {

            cout<<" ";
        }    

        for(aster = 0; aster < linactual*2-1; aster++)

        {

            cout<<"*";

        }  
        cout<<""<<endl;
    }

    ban = 1;
    ban2 = n2;

    for(linactual2 = 1; linactual2 <= n2/2; linactual2++)
    {
     
        //ESPACIOS

        
        for(espacio2 = 0 ; espacio2 < ban ; espacio2 ++)
        {
           cout<<" ";

        }    

        ban = ban + 1 ;

        //ASTERISCOS

        for(aster2 = 2; aster2 < ban2 ; aster2 ++)
        {

            cout<<"*";

        }  
        cout<<""<<endl;
        ban2 = ban2 - 2;

    }
    return 0;

}