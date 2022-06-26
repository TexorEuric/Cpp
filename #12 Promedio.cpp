/*La calificación final de un estudiante es la media ponderada
de tres notas: La nota de prácticas que cuenta un 30% del total, 
la nota teórica que cuenta un 60% y la nota de participación que 
cuenta el 10% restante. Escriba un programa que lea de la entrada
estándar las tres notas de un alumno y escriba la salida estándar 
su nota final.*/

#include<iostream>
using namespace std;

int main(){
    
    //Asignamos variables a las notas
    float prac, teor, part, final=0;

    //Lectura de datos
    cout<<"Digite la nota de practica: "; cin>>prac;
    cout<<"Digite la nota de teorica: "; cin>>teor;
    cout<<"Digite la nota de participacion: "; cin>>part;

    //prac = prac * 0.30; Se sustituyen para reducir
    prac *= 0.30; 
    teor *= 0.60;
    part *= 0.10;

    //Sumamos las notas finales
    final = prac + teor + part;

    //Mostramos en pantalla la nota final
    cout<<"La nota final es: "<<final;

    return 0;
}