/* Escriba un programa que lea un caracter e indique si el 
caracter es una vocal minuscula o una vocal mayuscula*/

#include<iostream>
using namespace std;

int main(){

    //Guardamos la variable
    char letra;

    //Lectura de datos
    cout<<"Ingresa una letra: "; cin>>letra;

    /* Dentro del switch valuamos 2 condiciones y un default, la primera es que si son las letras vocales y mayusuculas; tendran
    un mensaje, si las letras son vocales y minusculas tendran otro mensaje. Si no se cumple ninguna de las anteriores son consonantes
    ya sean mayusculas o minusculas. */
    switch (letra)
    {
    case 'A': 
    case 'E': 
    case 'I': 
    case 'O': 
    case 'U': cout<<"La letra es una vocal mayuscula."; break;
    case 'a': 
    case 'e': 
    case 'i': 
    case 'o': 
    case 'u': cout<<"La letra es una vocal minuscula."; break;
    default: cout<<"La letra no es una vocal."; break;
    }


    return 0;
}