#include "iostream"

using namespace std;

void datos(double[]);

int main(){

    double estatura[25];


    cout << endl << "..:: INGRESE LA ESTATURA DE 25 ESTUDIANTES ::.." << endl;

    datos(estatura);
     
    return 0;

}

void datos(double estatura[]){

    double suma=0;
    
    for (int i=0 ; i < 25 ; i++){

        cout << endl << "Ingrese estatura [" << (i+1) << "]: ";
        cin >> estatura[i];
        suma += estatura[i];

    }

    suma = (suma/25);

    cout << endl << "La media de estatura es: " << suma << endl;

    int contador=0, contador2=0;

    for (int i=0 ; i < 25 ; i++){

        if (estatura[i] >= suma  ){
            contador++;
        }else if (estatura[i] < suma){
            contador2++;
        }

    }

    cout << endl << "La cantidad de estatura igual o encima de la media es: " << contador;
    cout << endl << "La cantidad de estatura menor de la media es: " << contador2 << endl;

}