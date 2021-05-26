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
main(){
    //Nesito crear un proceso para validar datos de ingreso
    int n= validanumero();
    saludoprogramador("juan");



}
