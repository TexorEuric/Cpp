/*Escribe un programa que lea tres numeros.
Despues debe leer un cuarto numero e indicar 
si el numero coincide con alguno de los anteriores.*/

#include<iostream>
using namespace std;

int main(){

    //Variables de los tres numeros
    int n1, n2, n3, n4;

    //Lectura de datos
    cout<<"\n"<<endl;
    cout<<"Digita el primer numero: "; cin>>n1;
    cout<<"Digita el segundo numero: "; cin>>n2;
    cout<<"Digita el tercer numero: "; cin>>n3;
    cout<<"\n"<<endl;

    cout<<"Digita el cuarto numero: "; cin>>n4;
    cout<<"\n"<<endl;

    //El operador (||) sirve para declarar una condicion como verdadera, si alguna de las condiciones es verdadera.
    //Si el numero 1 es igual a numero 4 es verdadero, sucesivamente con el numero 2 y 3.
    if(n1==n4 || n2==n4 || n3==n4)
    {
        cout<<"El numero "<<n4<<" coincide con un numero.";
    }
    else
    {
        cout<<"El numero "<<n4<<" no coincide con ningun numero.";
    }

    cout<<"\n"<<endl;

    return 0;
}