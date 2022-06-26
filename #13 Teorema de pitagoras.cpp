#include<iostream>
#include<math.h>
using namespace std;
int main(){
    
    //Declaramos variables
    float c1, c2, h;
    
    cout<<"\n"<<endl;
    //Lectura de datos
    cout<<"Ingresa el cateto opuesto: "; cin>>c1;
    cout<<"Ingresa el cateto adyacente: "; cin>>c2;
    cout<<"\n";

    //Expresión aritmética de el teorema de pitágoras
    h = (sqrt((pow(c1,2))+(pow(c2,2))));

    //Mostramos el resultado con un total de un numero entero y dos decimales
    cout<<"\n"<<endl;
    cout.precision(3);
    cout<<"La hipotenusa es: "<<h;
    cout<<"\n"<<endl;


    return 0;
}