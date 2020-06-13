#include "iostream"
#include "time.h"

int numero(int);

using namespace std;

int main(void){

    int n;

    cout << endl << " ..:: NUMERO MAGICO ::.." << endl;

    numero(n);

}

int numero (int n){

    
    int aleatorio, bandera;

    srand(time(NULL)); //Numeros aleatorios
    aleatorio = 1+rand() %(100);

    while(bandera!=2){

        int contador=1, contador2=4; 
        
        do{
        cout << endl << "Ingrese un numero: ";
        cin >> n;
            
        if (n > aleatorio) {
            cout << "El numero ingresado es mayor al numero secreto. Intentos[" << contador2 << "]"<< endl;
        }else if(n < aleatorio){
            cout << "El numero ingresado es menor al numero secreto. Intentos[" << contador2 << "]" << endl;
        }

        contador++;
        contador2--;

    }while(n!=aleatorio && contador <= 5);
    
    if(n==aleatorio){    
        cout << endl << "FELICIDADES..!! ADIVINASTE EL NUMERO MAGICO : " << endl;
    }else{
        cout << endl << "Lo siento no adivinaste el numero magico :(" << endl;
    }

    cout << endl << "Quieres volver a intentarlo? " << endl << "[1] SI" << endl << "[2] NO" << endl;
    cin >> bandera;

    }
    

}