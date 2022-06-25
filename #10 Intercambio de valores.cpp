//Escribe un código que intercambie los valores de dos 
//variables.
#include<iostream>
using namespace std;
int main(){
    int x, y, aux=0;

    cout<<"Digita el valor de x: "; cin>>x;
    cout<<"Digita el valor de y: "; cin>>y;

    aux = x;
    x = y;
    y = aux;

    cout<<"\nIntercambiando valores..."<<endl;
    
    cout<<"\nx = "<<x;
    cout<<"\ny = "<<y;

    cout<<"\n"<<endl;

    return 0;
}