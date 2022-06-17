#include <iostream>
#include <iostream>
#include <math.h>
// PROBLEMA 15 RECIBIR UN NUMERO IMPAR Y GENERAR LA MATRIZ
using namespace std;

int main()
{
    int N, sum = 1, add = 2, cont = 1;

    cout << "Ingrese un numero impar para conocer la suma de las diagonales de la matriz cuadratica de tamano: ";
    cin >> N;

    if (N % 2 == 1){
    if (N >= 1){
    for (int i = 1; i <= N; i += 2){

        for (int j = 1; j <= 4 && i != 1; j++){

            sum = sum + add;
            cont += sum;

            if (j == 4){

                add += 2;

            }
        }
    }
    cout << "En una espiral de " << N << "x" << N << ", la suma es: " << cont<< endl;
    }
    else {
        cout << "Los datos ingresados son erroneos." << endl;
    }
    }
    else {
        cout << "Los datos ingresados son erroneos." << endl;
    }
    return 0;
}