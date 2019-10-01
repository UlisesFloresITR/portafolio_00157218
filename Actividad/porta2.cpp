/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ulises
 *
 * Created on 19 de agosto de 2019, 07:42 PM
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
 
    
    
    int n = 0,k = 0;
    double mediana = 0;
    cout << "Cantidad de casillas: ";
    cin >> n;

    int arreglo[n];
    for(int i=0; i<n; i++){
        arreglo[i] = 0;
    }
    if(n%2==0){
        
        for(int i=0; i<n; i++){
            cout << "Ingrese valor[" << i << "]: ";
            cin >> arreglo[i];           
        }
            k = (n/2)-1;
            mediana= (double)(arreglo[k]+arreglo[k+1])/2; 
            cout << fixed << setprecision(1) <<"La Mediana " << mediana << endl;
    }else{
        for(int i=0; i<n; i++){
            cout << "Ingrese valor[" << i << "]: ";
            cin >> arreglo[i];            
        }   
            k = ((n-1)/2);
            cout << arreglo[k];
            cout << " Mediana "<< endl;
    }
}

