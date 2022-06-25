#include<iostream>
using namespace std;
int main(){
    //Declaramos las variables que vamos a utilizar
    float a,b,c,d,e,f,g=0;

    //Hacemos lectura de datos
    cout<<"Ingresa el primer numero: "; cin>>a;
    cout<<"Ingresa el segundo numero: "; cin>>b;
    cout<<"Ingresa el tercer numero: "; cin>>c;
    cout<<"Ingresa el cuarto numero: "; cin>>d;
    cout<<"Ingresa el quinto numero: "; cin>>e;
    cout<<"Ingresa el sexto numero: "; cin>>f;

    //Realizamos la operación aritmética
    g = ((a+(b/c))/(d+(e/f)));

    //Se muestra el resultado, redondeado a dos decimales 
    cout.precision(2);
    cout<<"\nEl resultado es: "<<g; cout<<""<<endl;

    return 0;
}