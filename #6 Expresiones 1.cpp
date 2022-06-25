#include<iostream>
using namespace std;
int main(){

    //Declaramos las variables a usar
    int a,b,c;
    //Hacemos la lectura de datos
    cout<<"Digita el primer numero: "; cin>>a;
    cout<<"Digita el segundo numero: "; cin>>b;
    //Realizamos la operación artimética de la expresión
    c = ((a/b) +1);
    //Mostramos en pantalla el resultado
    cout<<"Tu resultado es: "<<c;
    
    return 0;
}