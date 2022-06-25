#include <iostream>
using namespace std;
int main(){
    //Variables a usar
    int a,b,c,d,resul = 0;

    //Hacer lectura de datos
    cout<<"Ingresa el primer numero: "; cin>>a;
    cout<<"Ingresa el segundo numero: "; cin>>b;
    cout<<"Ingresa el tercer numero: "; cin>>c;
    cout<<"Ingresa el cuarto numero: "; cin>>d;

    //Realizar la operación aritmética
    resul = (a+(b/(c-d)));

    //Mostrar en pantalla el resultado con redondeo
    cout.precision(2);
    cout<<"El resultado es: "<<resul; cout<<""<<endl;
}