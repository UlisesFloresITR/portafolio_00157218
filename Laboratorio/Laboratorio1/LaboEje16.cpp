/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main1.cpp
 * Author: uca
 *
 * Created on 6 de septiembre de 2019, 13:29
 */
#include<iostream>
using namespace std;
main(){
    int m,suma,promedio;
    int n = 10;
    
    int A[n];
    cout<<"Ingrese el arreglo 1: \n";
    for(int i=0;i<n;i++){
        cout<<"ingrese: ";cin>>A[i];
        
    }
    
    //la suma
    cout<<"la suma es: \n";
    
        suma=A[0]+A[1]+A[2]+A[3]+A[4]+A[5]+A[6]+A[7]+A[8]+A[9];
        promedio=(A[0]+A[1]+A[2]+A[3]+A[4]+A[5]+A[6]+A[7]+A[8]+A[9])/10;
        cout<<suma<<endl;
        cout<<"El promedio es: "<<promedio<<endl;
    
}
