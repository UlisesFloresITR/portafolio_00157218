/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Labo2-1.cpp
 * Author: ulises
 *
 * Created on 13 de septiembre de 2019, 07:29 PM
 */

#include <iostream>

using namespace std;

void mcd(int mayor, int menor){
    if(mayor%menor == 0)
        cout << "EL mcd de los numeros es: " << menor << endl;
    else{
        int aux = menor;
        int residuo = mayor%menor;
        mcd(aux, residuo);
    }
}

int main(void)
{
    int var1, var2;
    cout << "Ingrese un numero entero mayor " << endl;
    cin >> var1;
    cout << "Ingrese un numero entero menor " << endl;
    cin >> var2;
    mcd(var1,var2);

    return 0;


}
