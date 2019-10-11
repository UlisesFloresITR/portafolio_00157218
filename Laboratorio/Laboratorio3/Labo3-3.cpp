/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Labo3-3.cpp
 * Author: 00157218
 *
 * Created on 11 de octubre de 2019, 14:08
 */

#include <iostream>
#include <string>
#include <stack>
using namespace std;

struct libro{
    string libro;
    int Cantidad_Pag;
};

void BuscarLibro(stack<libro> libros, string titulo){
	if (libros.empty()){
		cout << "El libro no ha sido encontrado :(" << endl;
	}else{
        if(libros.top().libro == titulo){
    	    cout << "Cantidad de paginas del libro que buscas: " << libros.top().Cantidad_Pag << endl;
        }else{
            libros.pop();
            BuscarLibro(libros, titulo);
        }
	}
}

int main()
{
	stack<libro> libros;
        
    libro lib1, lib2, lib3, lib4, lib5;
    
    lib1.libro = "libro1";
    lib1.Cantidad_Pag = 5;
    
    lib2.libro = "libro2";
    lib2.Cantidad_Pag = 10;
    
    lib3.libro = "libro3";
    lib3.Cantidad_Pag = 15;
    
    lib4.libro = "libro4";
    lib4.Cantidad_Pag = 20;
    
    lib5.libro = "libro5";
    lib5.Cantidad_Pag = 25;
    
	libros.push(lib1);
	libros.push(lib2);
	libros.push(lib3);
	libros.push(lib4);
	libros.push(lib5);

    string libro;
    cout << "Escribe el libro que buscas: " << endl;
    cin >> libro;
    
    BuscarLibro(libros, libro);
    
    return 0;
}

