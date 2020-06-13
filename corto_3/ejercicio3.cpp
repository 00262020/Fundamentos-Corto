#include "iostream"

using namespace std;

int bisiesto(int);

int main(void){

    int n;
    
    cout << endl << "..:: Ano bisiesto ::.." << endl;
    cout << endl << "Ingrese un ano: ";
    cin >> n;

    bisiesto(n);

    return 0;
}

int bisiesto (int n){

    int si;

    si = n % 400;
    
    if( n % 4==0 && n % 100 !=0){
        cout << endl << "SI ES BISIESTO" << endl;
    }else if (si == 0){
        cout << endl << "SI ES BISIESTO" << endl;
    }else{
        cout << endl << "NO ES BISIESTO" << endl;
    }

}