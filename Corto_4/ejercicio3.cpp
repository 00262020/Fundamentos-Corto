#include "iostream"

using namespace std;

int calcular(int);

int main(){

    int n;
    
    cout << endl << "..:: NOTAS ESTUDIANTES ::.." << endl;

    cout << endl << "Ingrese la cantidad de estudiantes a registrar: ";
    cin >> n;
    cout << endl;

    calcular(n);
    
    return 0;

}

int calcular(int n){

    double nota[5];
    

    for(int i=0 ; i<n ; i++ ){

        double total=0;

        cout  << "ESTUDIANTE [" << (i+1) << "]" << endl << endl;

        for(int j=0 ; j<5 ; j++){

            cout << "Ingrese nota [" << (j+1) << "]: ";
            cin >> nota[j];

            if (nota[j] > 10 || nota[j] < 0){
                cout << endl << "Nota incorrecta" << endl;;
                j--;
            }else{
                total += (nota[j]*0.20);
            }

        }

        cout << endl << "El promedio: " << total << endl;

        if(total >= 6.0){
            cout << endl << "El estudiante aprobo " << endl << endl;
        }else{
            cout << endl << "El estudiante reprobo " << endl << endl;
        }

    }

}