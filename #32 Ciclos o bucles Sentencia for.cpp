/*

for (size_t i = 0; i < count; i++)
    {
        // code //
    }

El ciclo for funciona igual que el ciclo do while, while... 
La unica diferencia es que despues de la declaracion de for 
se coloca el iterador (i=1; i=0) para despues colocar a donde termina
el ciclo i>10; i<10. y al final el incremento. (i++)

*/

#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    int i;
    
    cout<<""<<endl;
    cout<<"Numeros del 1 al 10."<<endl;        
    cout<<""<<endl;

    /*El for inicia en el numero 1, indicamos que despues sera
    menor a 10 y que ira de 1 en 1. */
     for(i=1;i<=10;i++){
        cout<<i<<endl;
     }

    cout<<""<<endl;
    cout<<"Numeros del 10 al 1."<<endl;
    cout<<""<<endl;

    /*El for inicia en el numero 10, indicamos que despues sera
    mayor o igual a 1 y que ira de 1 en 1 pero de forma inversa. */
    for(i=10;i>=1;i--){
        cout<<i<<endl;
    }
    cout<<""<<endl;
    
    system("pause");
    return 0;
}