//Alumna:Helen Acevedo Tobar carne: 0909-21-1802  Ejercicio3
//catedratico:Ing.Juan Pablo Escobar Castro   Cuso:ProgramcionI

#include <iostream>
#include <stdlib.h>
#include <math.h>


using namespace std;

 void controlCondicionales(){
     //ingresada la edad determinar si es mayor de edad o no
     int edad;
     cout<<"----Ingresado la edad determina si es mayor de edad o no----"<<endl;
     cout<<"Ingrese su edad\n";
     cin>>edad;

     if (edad>18){
         cout<<"Usted es mayor de Edad\n";

     }else{
         cout<<"Usted es menor de edad\n";
     }
    //ingresados dos numeros determinar cual de los es mayor
     int nume1,nume2;
     cout<<"----Ingresados dos numeros determinar cual es el mayor----"<<endl;
     cout<<"Ingrese un numero\n";
     cin>>nume1;
     cout<<"Ingrese otro numero\n";
     cin>>nume2;
     if(nume1>nume2){
         cout<<"El primer numero es mayor que el segundo numero\n";

     }else{
         cout<<"El segundo numero es mayor que el primer numero\n";
     }
    //Escribir un programa que pida al usuario un número entero y determine si es par o impar.
     int num;
     cout<<"----Determinacion de numero si es par o impar----"<<endl;
     cout<<"Ingrese un numero : "<<endl;
     cin>>num;
     if(num % 2 == 0){
         cout<<"El numero es Par\n";
     }

     else{
         cout<<"El numero es Impar\n";
     }
 }

 void controlIterativas(){
    //Escribir un programa que pida al usuario un número y calcule su factorial utilizando un bucle while.
     int i=1,num;
     float fact=1;
     cout<<"----Calculo de factorial----"<<endl;
     cout<<"Ingrese un numero:\n";
     cin>> num;

     while (i<=num ){
         fact*=i;
         i++;
     }
     cout<<"El factorial de:"<<num<<" es:"<<fact<<endl;
    //Escribir un programa que pida al usuario un número mayor a 10 y menor que 30,  y que muestre por pantalla todos los números impares desde 1 hasta ese número utilizando un bucle for.
    int numero1;
    cout<<"----Ingrese un numero mayor de 10 y menor de 30.----ciclo for"<<endl;
    cout<<"Ingrese un numero"<<endl;
    cin>>numero1;
     cout << "Se muestran los numeros impares desde el 1 hasta el numero ingresado en ciclo for:" << endl;
        for (int i = 1; i < numero1; i++) {
            if (i % 2 == 1) {
                cout << i << endl;
            }
        }
     //Escribir un programa que pida al usuario un número mayor a 10 y menor que 30,  y que muestre por pantalla todos los números impares desde 1 hasta ese número utilizando un ciclo while.
     int numero2,l=1;
     cout<<"----Ingrese un numero mayor de 10 y menor de 30.----ciclo while"<<endl;
     cout<<"Ingrese un numero"<<endl;
     cin>>numero2;
     cout << "Se muestran los numeros impares desde el 1 hasta el numero ingresado en ciclo while:" << endl;
     while(l<numero2){
         if(l%2==1){cout<<l<<endl;}
        l++;
     }

    }


void controlSeleccion(){
     //Escribir un programa que pida al usuario un número del 1 al 5 y muestre por pantalla el nombre del día de la semana correspondiente utilizando una estructura switch.
    int opc;
    cout<<"----Dias de la semana lunes a viernes---- "<<endl;
    cout<<"Ingrese un numero del 1 al 5 "<<endl;
    cin>>opc;

    switch (opc) {
        case 1: {
            cout << "Hoy es Lunes " << endl;
            break;
        }
        case 2: {
            cout << "Hoy es Martes" << endl;
            break;
        }
        case 3: {
            cout << "Hoy es Miercoles" << endl;
            break;
        }
        case 4:{
            cout<<"Hoy es Jueves"<<endl;
            break;}
        case 5:{
            cout<<"Hoy es Viernes"<<endl;
            break;}
        default:cout<<"Ingrese otro numero ";


    }


 }