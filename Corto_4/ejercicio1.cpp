#include <iostream>
#include <string.h>

using namespace std;

void recorrido(char []);

int main(){

    char frase[25];

    cout << endl << "Ingrese la frase: ";
    cin.getline(frase, 25);

    recorrido(frase);

    cout << endl << endl << "Frase final: " << frase << endl;
    
    return 0;

}

void recorrido(char frase []){

    for (int i = 0 ; frase [i] != '\0' ; i++){


        cout << endl << "Frase: " << frase[i] ;

        if ( frase[i] == 'm'){
            frase[i] = '0';
        }
        if ( frase[i] == 'u'){
            frase[i] = '1';
        }
        if ( frase[i] == 'r'){
            frase[i] = '2';
        }
        if ( frase[i] == 'c'){
            frase[i] = '3';
        }
        if ( frase[i] == 'i'){
            frase[i] = '4';
        }
        if ( frase[i] == 'e'){
            frase[i] = '5';
        }
        if ( frase[i] == 'l'){
            frase[i] = '6';
        }
        if ( frase[i] == 'a'){
            frase[i] = '7';
        }
        if ( frase[i] == 'g'){
            frase[i] = '8';
        }
        if ( frase[i] == 'o'){
            frase[i] = '9';
        }
        
    }

}