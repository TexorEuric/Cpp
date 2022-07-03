/* Escribe un programa que lea la edad (entero)
e indique si la edad está en el rango [18-25]*/

#include<iostream>
using namespace std;

int main(){
    
    //Variable de la edad
    int edad;

    //Lectura de datos
    cout<<"Digite su edad: "; cin>>edad;

    /*El operador (&&) se puede definir como y, significa que se tienen que cumplir las dos condiciones para que 
    todo sea verdadero*/

    if((edad>=18)&&(edad<=25)){ //Verificamos que la edad este entre los 18 y los 25 con:
        cout<<"Su edad está en el rango de 18 a 25.";
    }
    else{
        cout<<"Su no edad está en el rango de 18 a 25.";
    }
    
    return 0;
}