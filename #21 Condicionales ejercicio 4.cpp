/*Realice un programa que lea un valor entero y determine si se trata 
de un número par o impar.*/
#include<iostream>
using namespace std;

int main(){

    //Variable de almacenamiento
    int num;

    //Lectura de datos
    cout<<"Digite un numero: "; cin>>num;

    if(num % 2 == 0){
        cout<<num<<" es un numero par.";
    }
    else{
        cout<<num<<" es un numero impar.";
    }
    
    return 0;
}