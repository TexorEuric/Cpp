#include<iostream>
#include<math.h>
using namespace std;

int main(){
    
    //Definimos las variables
    float a,b,c,res_p=0,res_n=0;

    //Lectura de datos
    cout<<"\n"<<endl;
    cout<<"Asigna valor de a: "; cin>>a;
    cout<<"Asigna valor de b: "; cin>>b;
    cout<<"Asigna valor de c: "; cin>>c;
    cout<<"\n"<<endl;

    //Expresión algebraica
    res_p = (-b+(sqrt(pow(b,2) - (4*a*c))))/(2*a);
    res_n = (-b-(sqrt(pow(b,2) - (4*a*c))))/(2*a);

    //Resultado en pantalla
    cout.precision(3);
    cout<<"Primer resultado: "<<res_p<<endl;
    cout.precision(3);
    cout<<"Segundo resultado: "<<res_n<<endl;
    cout<<"\n"<<endl;

    return 0;
}