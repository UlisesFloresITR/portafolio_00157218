/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Labo4-8.cpp
 * Author: ulises
 *
 * Created on 18 de octubre de 2019, 11:08 PM
 */

#include <string>
#include <iostream>

using namespace std;

int main()
{
    cout << "Digite un número mayor a cero: ";
	int numero;
	string binario = "";
	cin >> numero;
	if(numero > 0){
   	    while(numero>0){
   	       if(numero%2 == 0)
   	            binario = "0" + binario;
   	        else
   	            binario = "1" + binario;
   	            numero = numero/2;
   	    }
   	    cout <<"Convertido su numero en Binario: " <<binario;
	}
	else{
   	    if(numero == 0)
   	        cout << "0";
   	    else
   	     	  cout << "Solo digite valores positivos";
	}
	return 0;
}
