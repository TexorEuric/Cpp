/*      Estructuras condicionales: No todas las partes del código
       se ejecutan, esto depende de la condición que tengamos.

       Si se cumple la condición 1 se ejecuta la primer instrucción, 
       pero si no se cumple se ejecuta la segunda instrucción.

    if(condition){
        Instructions 1
    }
    else{
        Instructions 1
    }
    
    */
#include<iostream>
using namespace std;

int main(){
    
    //Se define variable para recibir datos y variable para comparar el 5 con otro numero cualquiera
    int numero, dato = 5;
    
    
    //Lectura de datos
    cout<<"\n"<<endl;
    cout<<"Operador de igualdad."<<endl; 
    cout<<"Digita un numero: "; cin>>numero;

    //La diferencia entre (=//==) es que este es el operador de asignación de valores(=); este otro es el operador de igualdad (==)
    // (==) Es un comparador que se usa en estructuras condicionales, para determinar si cierta condición puede ser falsa o verdadera.

    //Estructura condicional
    if(numero == dato){
        cout<<"El numero es 5.";
    }
    else{
        cout<<"El numero es diferente de 5.";
    }


    cout<<"\n"<<endl;
    //Lecura de datos
    cout<<"Operador de diferencia."<<endl; 
    cout<<"Digita un numero: "; cin>>numero;
    cout<<"\n"<<endl;

    //El operador de diferencia (!=) sirve para: Hace una comparación inversa, evalúa un cierto valor y determina si el valor es 
    //diferente al resultado que está en la condición entonces lo evalúa como verdaddero y ejecuta la primera instrucción. Es parecido
    //al condicional normal, pero funciona al revés. 
    
    //Estructura condicional
    if(numero != dato){
        cout<<"El numero es diferente de 5.";
    }
    else{
        cout<<"El numero es 5.";
    }

    cout<<"\n"<<endl;
    //Lecura de datos
    cout<<"Operadores mayor que y menor que."<<endl; 
    cout<<"Digita un numero: "; cin>>numero;
    cout<<"\n"<<endl;

    //Los operadores mayor (>) y menor (<) sirven para comparar que valor es mayor o menor a otro. Ejemplo (>): El cinco es mayor a 4. (5 > 4)
    //Ejemplo (<): EL 3 es menor a 5. (3 < 5)
    
    //Estructura condicional
    if(numero > dato){
        cout<<"El numero es mayor a 5.";
    }
    else{
        cout<<"El numero es menor a 5.";
    }

    cout<<"\n"<<endl;
    //Lecura de datos
    cout<<"Operadores mayor o igual que y menor o igua que."<<endl; 
    cout<<"Digita un numero: "; cin>>numero;
    cout<<"\n"<<endl;

    /*Los operadores mayor o igual que (>=) y menor o igual que (<=) se diferencían de los operadores mayor y menor que,
    porque estos nos inidican que valor es mayor y que valor es menor, pero también nos inidican si el valor ingresado es igual
    al valor de la condición y lo evalúa como verdadero. Ejemplo (>=): El cinco es mayor o igual que el 5. (5 >= 5) En este 
    caso 5 es igual a 5, y es verdadera la condición. Ejemplo (<=): El 4 es menor o igual a 4. (4 <= 4) El 4 no es menor a 4, pero si on iguales, 
    por tanto la condición es verdadera.
    */
    
    //Estructura condicional
    if(numero >= dato){
        cout<<"El numero es mayor o igual a 5.";
    }
    else{
        cout<<"El numero es menor a 5.";
    }
    
    return 0;
}