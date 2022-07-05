/* 

   do
   {
     //code
   } while (condition);
   
*/

#include<iostream>
#include<stdlib.h> //Libreria que contiene los prototipos de funciones de C para gestión de memoria dinámica, control de procesos y otras.
#include<math.h>

using namespace std;

int main(){

    //Iterador del ciclo do while
    int i = 1;
    int j = 10;

    cout<<""<<endl; 
    cout<<"\tDO WHILE (+)"<<endl;
    
    //El ciclo do while, primero ejecuta las ordenes y luego verifica la expresion logica
    //Proceso Bucle: Inicio
    do
    {
        cout<<i<<endl;
        i++;

    } while (i<=10);
    cout<<""<<endl;
    //Proceso Bucle: Termino

    cout<<"\tDO WHILE (-)"<<endl;
    //El ciclo do while, primero ejecuta las ordenes y luego verifica la expresion logica
    //Proceso Bucle: Inicio
    do{
      cout<<j<<endl;
      j--;

    }while(j>=1);
    //Proceso Bucle: Termino
    cout<<""<<endl;

    system("pause"); //Funcion de la libreria <stdlib.h>, sirve para darle una pausa al compilador y terminar de ejecutar cuando se presiona una tecla
                    // Muestra un mensaje de presionar una tecla para continuar
    return 0;
}