#include<iostream>
using namespace std;

int main(){

    int x,y,z;

    cout<<"\n"<<endl;
    cout<<"Digite el primer numero: "; cin>>x;
    cout<<"Digite el segundo numero: "; cin>>y;
    cout<<"Digite el tercer numero: "; cin>>z;

    if(x>y){
        if(x>z){
            cout<<"El numero mas grande es: "<<x<<".";
        }
    }
    else{
        if(y>z){
            cout<<"El numero mas grande es: "<<y<<".";
        }
        else{
            cout<<"El numero mas grande es: "<<z<<".";
        }
    }

    return 0;
}