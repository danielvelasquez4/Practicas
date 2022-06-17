#include <stdio.h>
#include <iostream>
#include <math.h>
// PROBLEMA 11 RECIBIR UN NÚMERO Y CALCULAR EL MCM DE TODOS LOS NÚMEROS ENTEROS ENTRE 1 Y
// EL NÚMERO INGRESADO
int main()
{
    int numero; int residuo, mcm, i, n; int multi;

    printf("Ingrese la cantidad de numeros: "); scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        
        numero = i;
        if (i == 1)
        {
            mcm = numero;
            multi = numero;
        }
        else
        {
            multi = mcm * numero;

            do
            {
                residuo = mcm % numero;
                mcm = numero;
                numero = residuo;
            } while (residuo != 0);

            mcm = multi / mcm;
        }
        numero = 0;
    }
    printf("El mcm es: %d\n", mcm);

    return 0;
}