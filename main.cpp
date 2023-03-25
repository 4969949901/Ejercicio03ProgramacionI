//Alumna:Helen Acevedo Tobar carne: 0909-21-1802  Ejercicio3
//catedratico:Ing.Juan Pablo Escobar Castro   Cuso:ProgramcionI
#include <iostream>
#include "Archk.h"

using namespace std;

int main() {


   cout << "Ejercicio 03 de Programacion I\n" << endl;
    /*controlCondicionales();
    controlIterativas();
    controlSeleccion();*/

    //Escribir un programa en el cual el usuario pueda seleccionar cualquiera de los ejercicios anteriores para poder ejecutarlo.
    int opcion;
    cout<<"------Menu de seleccion de ejercicios:-----"<<endl;
    cout<<"Selecciones una opcion:\n1.Estructuras de control condicionales (IF - IF ELSE):\n\t*Escribir un programa que pida al usuario su edad y determine si es mayor de edad o no.\n\t*Escribir un programa que pida al usuario dos numeros y determine cual es el mayor de los dos.\n\t*Escribir un programa que pida al usuario un numero entero y determine si es par o impar.\n2.Estructuras de control Iterativas ( FOR - WHILE):\n\t*Escribir un programa que pida al usuario un numero y calcule su factorial utilizando un bucle while.\n\t*Escribir un programa que pida al usuario un numero mayor a 10 y menor que 30,  y que muestre por pantalla todos \tlos numeros impares desde 1 hasta ese numero utilizando un bucle for.\n\t*Escribir un programa que realice lo mismo que el ejercicio anterior, pero usando el bucle while.\n3.Estructuras de control de seleccion (SWITCH):\n\t*Escribir un programa que pida al usuario un numero del 1 al 5 y muestre por pantalla el nombre del dia de la \tsemana correspondiente utilizando una estructura switch.\n\t";
    cin>>opcion;

    switch(opcion){
        case 1:
            controlCondicionales();
            break;
        case 2:
            controlIterativas();
            break;
        case 3:
            controlSeleccion();
            break;
        default:cout<<"intente con otro numero";
    }


    return 0;
}
