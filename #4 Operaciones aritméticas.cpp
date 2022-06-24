#include<iostream>

using namespace std;

int main(){
	
	/*1. Escribe un programa que lea la entrada de dos números
	y muestre su suma, resta, multiplicación y división.*/
	
	//Declaramos dos variables para los numeros
	int num_1, num_2;
	
	//Hacemos lectura del primer numero
	cout<<"Digite el primer numero: ";
	cin>>num_1;
	
	//Hacemos lectura del segundo numero
	cout<<"Digite el segundo numero: ";
	cin>>num_2;
	
	//Realizamos las operaciones aritméticas y las colocamos en variables dependiendo del tipo de resultado
	int suma = (num_1 + num_2);
	int resta = (num_1 - num_2);
	int mult = (num_1 * num_2);
	double div = (num_1 / num_2);
	
	//Mostramos lo resultados
	cout<<""<<endl;
	cout<<"La suma de los numeros es: "<<suma<<endl;
	cout<<"La resta de los numeros es: "<<resta<<endl;
	cout<<"La multiplicacion de los numeros es: "<<mult<<endl;
	cout<<"La division de los numeros es: "<<div<<endl;
	
	return 0;
}
