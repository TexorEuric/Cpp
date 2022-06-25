#include<iostream>
using namespace std;
int main(){
	/*3.Realice un programa que lea la entrada de los siguientes datos 
	de una persona: 
	-Edad: Entero
	-Sexo: Caracter
	-Altura en metros: dato real
	Tras leer los datos, el programa debe mostrar en la salida
	*/
	
	//Declaramos las variables de edad, sexo y altura 
	int edad;
	char sexo[10];
	float altura;
	
	//leemos la entrada de datos y las almacenamos en variables
	cout<<"Digita tu edad: ";cin>>edad;
	cout<<"Digite su sexo: ";cin>>sexo;
	cout<<"Digite su altura en metros: ";cin>>altura;
	
	//Mostramos la salida de datos
	cout<<"\nEdad: "<<edad;
	cout<<"\nSexo: "<<sexo;
	cout<<"\nAltura: "<<altura;
	return 0;
}
