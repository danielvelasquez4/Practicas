#include <stdio.h>
#include <iostream>
#include <math.h>
// PROBLEMA NUMERO 3 PRACTICA 1
// Fecha válida o inválida
using namespace std;

int main()
{   cout << "Verificar si la fecha ingresada valida o invalida."<< endl<<endl;


    int meses, dias;
    bool bandera = true;
    cout<<"Ingrese el mes: ";cin>>meses;
    cout<<"Ingrese el dia: ";cin>>dias;
    cout<<dias<<"/"<<meses;

    if((meses>0 && meses<=12) && (dias>0 && dias<=31)){ 
        if(meses==2 && dias>29){cout<<" Es una fecha invalida."<<endl; bandera=false; }  
        if(meses==2 && dias==29){cout<<" Es valida en bisiesto."<<endl; bandera=false;}     
        if((meses==4||meses==6||meses==9||meses==11) && dias>30){cout<<" Es una fecha invalida."<<endl;bandera=false;} 

        else if(bandera == true){cout<<" Es una fecha valida"<<endl;}
    }
    else {cout<<" Es una fecha invalida"<<endl;}
    return 0;
}
