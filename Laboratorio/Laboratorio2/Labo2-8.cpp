/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Labo2-8.cpp
 * Author: ulises
 *
 * Created on 13 de septiembre de 2019, 07:53 PM
 */

#include <iostream>

using namespace std;

void cifras(int numero){
    int contador = 0;
    if(numero%10 == numero)
        cout << "El numero de cifras del numero es: " << contador << endl;
    else{
        contador++;
        cifras(numero/10);
      }
}

int main(void)
{
    int x = 0;
    cout << "Ingrese un numero: ";
    cin >> x;
    cifras(x);
    return 0;
}

