/*Escriba un programa que lea un carácter e indique
en la salida si el carácter es una vocal o no.*/

#include<iostream>
using namespace std;

int main(){

    //Variable para almacenar la letra
    char letra;

    //Lectura de datos
    cout<<"Digite una letra: "; cin>>letra;
    cout<<"\n"<<endl;

    //Creamos un switch para valuar solo las vocales  (minusculas y mayusculas).
    switch (letra)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U': cout<<"La letra es una vocal."; break;
        //Si el usuario digita una letra que no sea vocal el programa la cuenta como consoante o vocal en mayúscula
        default: cout<<"La letra no es una vocal."; break;
    }

    return 0;
}