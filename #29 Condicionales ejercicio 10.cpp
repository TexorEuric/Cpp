/* Hacer un menu que considere las siguientes opciones.

    Caso 1: Cubo de un numero.
    Caso 2: Numero par o impar.
    Caso 3: Salir.

*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    
    //Se almacena la variable de opcion
    int opc, num;
    
    //Inicio de proceso: MENU
    cout<<"\n\t MENU\n"<<endl;
    
    //Opciones
    cout<<"1.- Cubo de un numero."<<endl;
    cout<<"2.- Numero par o impar"<<endl;
    cout<<"3.- Salir\n"<<endl;
    //Respuesta
    cout<<"Opcion: "; cin>>opc;

    //Casos de la opcion
    switch (opc)
    {
    case 1: //Cubo de un numero
        cout<<"Digita un numero: "; cin>>num;
        num = pow(num,3);
        cout<<"El cubo del numero es "<<num;
        break;
    case 2: //Numero par o impar
        cout<<"Digita un numero entero: "; cin>>num;
        if(num%2==0){
            cout<<"Numero par";
        }else{
            cout<<"Numero impar";
        }
    break;
    //Salida del programa
    case 3: break;
    //Datos no esperados
    default: cout<<"Digito invalido.";
    break;
    }
    //Termino de proceso: MENU

    
    return 0;
}