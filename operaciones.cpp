#include <iostream>
using namespace std;
int validanumero(){

    int numero;
    do{
        cout<<"Ingrese un numero :  ";
        cin >>numero;
    }while( numero<1 || numero >10);
    return numero;

}
void sumar(int n ){
    int resultado =n+n;

}
main(){
    //Nesito crear un proceso para validar datos de ingreso
    int n= validanumero();


    int numero;
    do {
        cout<<"igrese un numero : ";
        cin>>numero;

    }while (numero<1 || numero>10);
    return numero;
}
void saludoprogramador (string nombre){
    cout << "Buenas tardes :  "<<nombre;
    cout << "determinar si esres un robot";
    cout<<"como has estado";
}

