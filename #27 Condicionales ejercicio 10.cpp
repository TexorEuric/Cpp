/* Mostrar los meses del año, pidiendo al usuario
un numero entre (1-12), mostrar el mes que corresponde.*/

#include<iostream>
using namespace std;

int main(){

    //Variable donde se almacena el mes
    int mes;

    //Lectura de datos
    cout<<"\n"<<endl;
    cout<<"Digita un numero (1-12): "; cin>>mes;
    cout<<"\n"<<endl;

    //Con un switch verificamos que cada mes le corresponde un numero entero, por tanto en la condicion switch podemos asignar un mes a cada num.
    switch (mes)
    {
    case 1: cout<<"Enero"; break;
    case 2: cout<<"Febrero"; break;
    case 3: cout<<"Marzo"; break;
    case 4: cout<<"Abril"; break;
    case 5: cout<<"Mayo"; break;
    case 6: cout<<"Junio"; break;
    case 7: cout<<"Julio"; break;
    case 8: cout<<"Agosto"; break;
    case 9: cout<<"Septiembre"; break;
    case 10: cout<<"Octubre"; break;
    case 11: cout<<"Noviembre"; break;
    case 12: cout<<"Diciembre"; break;
    
    default: cout<<mes<<" no es un numero entre (1-12)."; break;
    }
    cout<<"\n"<<endl;
    
    return 0;
}