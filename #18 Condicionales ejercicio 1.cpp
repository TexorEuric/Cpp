/*Escribe un programa que lea dos números y determine cuál de 
ellos es el mayor.*/

#include<iostream>
using namespace std;

int main(){

    //Variables de los dos números
    int n1,n2;

    //Lectura de datos
    cout<<"\n"<<endl;
    cout<<"Digite el primer numero: "; cin>>n1;
    cout<<"Digite el segundo numero: "; cin>>n2;
    cout<<"\n"<<endl;

    /* El primer condicional que se muestra es que 
    si el primer numero es igual al segundo numero estos serán iguales pero si esto no se cumple 
    los numeros son diferentes. */
    if(n1 == n2){
        cout<<"El numero "<<n1<<" es igual que "<<n2<<"."<<endl;
    }
    else{
        //Este segundo condicional muestra que numero es mayor que otro.
        if(n1 > n2){
        cout<<"El numero "<<n1<<" es mayor que "<<n2<<"."<<endl;
        }
        else{
        cout<<"El numero "<<n2<<" es mayor que "<<n1<<"."<<endl;
        }
        cout<<"\n"<<endl;
    }

    return 0;
}