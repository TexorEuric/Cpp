/* Sentencia Switch

switch(expresion)
{
case literal1:
    instructions_1;
    break;
case literal2:
    instructions_2;
    break;
case literal3:
    instructions_3;
    break;
default:
    instructions_3;
    break;    
}

*/

#include<iostream>
using namespace std;

int main(){


    //Declaramos una variable, que servirá como parametror principal para el switch
    int numero;

    //Lectura de datos
    cout<<"Digite un numero entre 1-5: "; cin>>numero;

    //Estructura del switch
    switch (numero)
    {
    case 1: cout<<"Es el numero 1."<<endl; break; //Nuestro break; sirve para separar las diferentes condiciones
                                                  //Si nosotros quitamos el break, se juntará el caso 1 con el caso 2, se anidan de alguna forma. 
    case 2: cout<<"Es el numero 2."<<endl; break;
    case 3: cout<<"Es el numero 3."<<endl; break;
    case 4: cout<<"Es el numero 4."<<endl; break;
    case 5: cout<<"Es el numero 5."<<endl; break;
    default: cout<<"Numero invalido, ingresa un numero del 1 al 5."<<endl;
        break;
    }

    return 0;
}