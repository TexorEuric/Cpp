#include<iostream>
#include<math.h>
using namespace std;

int main(){

    //Declaramos las variables
    float x, y, res = 0;

    //Lectura de datos
    cout<<"\n"<<endl;
    cout<<"Digita el valor de x: "; cin>>x;
    cout<<"Digita el valor de y: "; cin>>y;

    //Expresión arimética
    res = (sqrt(x))/(pow(y,2)-1);

    //Mostramos el resultado redondeado a dos decimales y un entero
    cout<<"\n"<<endl;
    cout.precision(3);
    cout<<"La hipotenusa es: "<<res<<endl;
    cout<<"\n"<<endl;

    return 0;
}