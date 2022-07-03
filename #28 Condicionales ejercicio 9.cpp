/*Hacer un programa que simule un cajero automatico con un saldo 
inicial de 1000 dolares.*/

#include<iostream>
using namespace std;

int main(){
    
    //Variable del saldo inicial
    int saldo = 1000,opc,opc_2;
    float extra, retiro;

    cout<<"\n"<<endl;
    cout<<"\t Bienvenido al cajero virtual."<<endl;
    cout<<"\n"<<endl;

    //Menu de opciones del cajero
    cout<<"1.- Ingresar dinero en cuenta."<<endl;
    cout<<"2.- Retirar dinero de la cuenta."<<endl;
    cout<<"3.- Salir."<<endl;
    //Opcion del cajero
    cout<<""<<endl;
    cout<<"Opcion:  "; cin>>opc;
    cout<<""<<endl;

    switch (opc)
    {
        //Inicio de proceso: Ingreso de dinero al banco
        case 1: 
        cout<<"Ingrese la cantidad que desea agregar: "; cin>>extra;

        
        if(extra<0) //Verificamos que el usuario no digite una cantidad negativa de dinero.
        {
            cout<<""<<endl;
            cout<<"No puedes ingresar saldo negativo. Intenta otra vez."<<endl;
        }
        
        //Asignamos a la vraiable con el saldo inicial el nuevo incremento.
        saldo += extra;
        cout<<""<<endl;
        //Verificacion de sald
        cout<<"Desea verificar su saldo: (si = 1 || no = 2):  "; cin>>opc_2;

        if(opc_2 == 1)
            cout<<"Su saldo es: "<<saldo<<"$ pesos."<<endl;
        else        
        break;
        //Terminación de proceso: Ingreso de dinero al banco.

        //Inicio de proceso: Retiro de dinero al banco.
        case 2:
        cout<<"Digita la cantidad que va a retirar: "; cin>>retiro;

        //Validimos que la cantidad a retirar no sea mayor al saldo.
        if(retiro>saldo)
        {
            cout<<"No tienes esa cantidad en tu cuenta bancaria.";
            cout<<""<<endl;
        }
        else //Si no es mayor, asignamos la resta del saldo.
        {
            saldo -= retiro;
        }

        //Verificacion de saldo
        cout<<"Desea verificar su saldo: (si = 1 || no = 2):  "; cin>>opc_2;

        if(opc_2 == 1)
            cout<<"Su saldo es: "<<saldo<<"$ pesos.";
        else        
        break;

        case 3: break;

        default: cout<<"No existe una opcion "<<opc<<", porfavor verifica tu pedido."; break;
    }

    return 0;
}