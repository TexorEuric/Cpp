#include<iostream>
using namespace std;
int main(){
    
    //Declaramos las variables para usar
    float a,b,c,d,e;
    //Hacemos lectura de datos
    cout<<"Escriba el primer numero: "; cin>>a;
    cout<<"Escriba el segundo numero: "; cin>>b;
    cout<<"Escriba el tercer numero: "; cin>>c;
    cout<<"Escriba el cuarto numero: "; cin>>d;
    //Colocamos la expresión a realizar
    e = ((a+b)/(c+d));
    //Mostramos el resultado redondeado a dos decimales
    cout.precision(2);
    cout<<"El resultado es: "<<e; cout<<".";

    return 0;
}