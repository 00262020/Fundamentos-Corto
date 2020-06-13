#include "iostream"

using namespace std;

int calcular(int);

int main(void){

    int n;

    cout << endl;
    
    cout << "Ingrese la cantidad de usuarios a registrar: ";
    cin >> n;

    calcular(n);

    return 0;

}

int calcular(int n){

    int trabajadas, extras;
    double total, real;
    
    
    for (int i=0;i<n;i++){

       cout << endl << "Ingrese la cantidad de horas trabajadas: ";
       cin >> trabajadas;
       cout << endl << "Ingrese la cantidad de horas extras: ";
       cin >> extras;

       trabajadas = trabajadas * 1.75;
       extras = extras * 2.50;

       total = trabajadas + extras;
       real = total - ((total*0.04)+(total*0.0625)+(total*0.10));

       cout << endl << "Salario Total: $" << total;
       cout << endl << "Salario real: $" << real << endl;

    }

}