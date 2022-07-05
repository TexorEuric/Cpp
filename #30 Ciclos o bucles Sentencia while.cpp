/*
while (Expresion logica){
    //Instrucciones;
}

Un bucle es un conjunto de instrucciones que se repiten
si se cumplen ciertas condiciones.
    
*/

//Imprime los numeros del 1 al 10
//Imprime los numeros del 10 al 1

#include<iostream>
#include<conio.h> //Libreria que da un sistema E/S por consola (MS-Dos en Windows), le da funciones al compilador usado.
using namespace std;

int main(){
    
    /*Declaramos las variables que nos serviran para la expresion logica*/
    int i=1;
    int j=10;

    
    cout<<""<<endl;
    cout<<"WHILE (+)"<<endl;
    /*La logica del while es la siguiente, cada vez que i=numero, 
    while va a evaluar si ese digito es menor a 10 o igual, de esa 
    forma sabra cuantas veces se repetiran las intrucciones dentro.*/
    while (i<=10)
    {
        //El iterador = i, se va a escribir cada que se repita el while.
        cout<<i<<endl;

        /* (i = i +1;) = (i+=1;) = (i++) i en un principio valdra 1 pero 
        conforme el ciclo se repite, i valdra */
        i++;
    }

    cout<<""<<endl;
    cout<<"WHILE (-)"<<endl;

    /*En este while verificamos que el ciclo termine mientras el iterador (j)
    sea mayor o igual a 1.*/
    while (j>=1)
    {
        cout<<j<<endl;
        j--; //(j--) = (j -= 1;) = (j = j -1;)
    }
    cout<<""<<endl;
    
    
    getch(); //Ayuda a darle una pausa a la consola para ejecutar programas, al presionar una tecla concluye el executer.
    return 0;
}