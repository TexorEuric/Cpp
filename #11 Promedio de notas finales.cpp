#include <iostream>
using namespace std;
int main(){
    
    //Declaramos las variables de las materias
    float a,b,c,d,prom=0;

    cout<<"Ingresa tus calificaciones.";
    cout<<"\n"<<endl;

    cout<<"Español: "; cin>>a;
    cout<<"Matemáticas: "; cin>>b;
    cout<<"Física: "; cin>>c;
    cout<<"Química: "; cin>>d;

    //Promedio de las materias 
    prom = ((a+b+c+d)/4);

    cout.precision(1);
    cout<<"El promedio es de: "<<prom;

    return 0;
}