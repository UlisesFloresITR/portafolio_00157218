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
    int habitantes[25];
}planeta;
    
    cout << "ingrese los nombres de los continentes" << endl;
    int i=0;
    int u=0;
    int max=0;
    string x;
    for(i = 0; i<5; i++){
        cout << "Ingrese continente "<< (i+1)<<endl;
        cin >> planeta.continente[i];
        
        for(u=0; u<5;u++){
            cout<< "Ingrese el nombre del Pais "<< endl;
            cin >> planeta.pais[u];
            cout<< "ingrese La Capital del Pais "<< endl;
            cin >> planeta.capital[u];
            cout<< "ingrese cantidad de habitantes "<<endl;
            cin >> planeta.habitantes[u];
        }
        if(planeta.habitantes[0]>max){
            max= planeta.habitantes[0];
            x= planeta.capital[0];           
        }
        if(planeta.habitantes[1]>max){
            max= planeta.habitantes[1]; 
            x= planeta.capital[1];
        }
        if(planeta.habitantes[2]>max){
            max= planeta.habitantes[2];
            x= planeta.capital[2];
        }
        if(planeta.habitantes[3]>max){
            max= planeta.habitantes[3];
            x= planeta.capital[3];
        }
        if(planeta.habitantes[4]>max){
            max= planeta.habitantes[4];
            x= planeta.capital[4];
        }
        
        cout << "continente " << planeta.continente[i]<< endl;
        cout << "PAIS 1 "<<planeta.pais[0] <<" Con su capital "<<planeta.capital[0]<<" Con "<< planeta.habitantes[0] <<" Numero de habitantes"<< endl;
        cout << "PAIS 2 "<<planeta.pais[1] <<" Con su capital "<<planeta.capital[1]<<" Con "<< planeta.habitantes[1] <<" Numero de habitantes"<< endl;
        cout << "PAIS 3 "<<planeta.pais[2] <<" Con su capital "<<planeta.capital[2]<<" Con "<< planeta.habitantes[2] <<" Numero de habitantes"<< endl;
        cout << "PAIS 4 "<<planeta.pais[3] <<" Con su capital "<<planeta.capital[3]<<" Con "<< planeta.habitantes[3] <<" Numero de habitantes"<< endl;
        cout << "PAIS 5 "<<planeta.pais[4] <<" Con su capital "<<planeta.capital[4]<<" Con "<< planeta.habitantes[4] <<" Numero de habitantes"<< endl;
        cout << "Poblacion total del continente " << (planeta.habitantes[0]+planeta.habitantes[1]+planeta.habitantes[2]+planeta.habitantes[3]+planeta.habitantes[4])<< endl;
        cout << "PAIS con poblacion mas grande ES " << x <<" con la cantidad de " << max <<endl;
    }
    
    return 0;
}

