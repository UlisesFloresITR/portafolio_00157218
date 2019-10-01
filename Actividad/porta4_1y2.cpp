/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   00157218_tarea2.cpp
 * Author: ulises
 *
 * Created on 27 de agosto de 2019, 01:51 PM
 */

#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cmath>
#include <iomanip>


using namespace std;


/*
 * 
 */
int main(int argc, char** argv) {
struct planeta{
    string continente[5];
    string pais[35];
    string capital[35];
    int habitantes;
}planeta;
    
    cout << "ingrese los nombres de los continentes" << endl;
    int i=0;
    int u=0;
    for(i = 0; i<5; i++){
        cout << "Ingrese continente "<< (i+1)<<endl;
        cin >> planeta.continente[i];
        
        for(u=0; u<5;u++){
            cout<< "Ingrese el nombre del Pais "<< endl;
            cin >> planeta.pais[u];
        }
        cout << "continente " << planeta.continente[i]<< endl;
        cout << "PAIS 1 "<<planeta.pais[0] << endl;
        cout << "PAIS 2 "<<planeta.pais[1] << endl;
        cout << "PAIS 3 "<<planeta.pais[2] << endl;
        cout << "PAIS 4 "<<planeta.pais[3] << endl;
        cout << "PAIS 5 "<<planeta.pais[4] << endl;
    }
    
    return 0;
}

