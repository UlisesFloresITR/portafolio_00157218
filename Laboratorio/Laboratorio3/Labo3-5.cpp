/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Labo3-7.cpp
 * Author: 00157218
 *
 * Created on 11 de octubre de 2019, 03:57 PM
 */

#include <iostream>
using namespace std;

struct nodo{
    int dato;
    nodo *sig;
};

class Lista{
private:
    nodo *pInicio;
    
public:
    Lista(void);
    void Mostrar(void);
    void MostrarInversa(void);
    void mostrarListaInverso(nodo *);
    void agregar(int);
};

Lista::Lista(void) {
    pInicio = NULL;
}

void Lista::agregar(int dato) {
    nodo *var1, *var2;

    nodo *nuevo = new nodo;
    nuevo->dato = dato;
    nuevo->sig = NULL;
    if (pInicio == NULL) {
        pInicio = nuevo;
    } else {
        var1 = pInicio;
        var2 = NULL;
        while (var1 != NULL) {
            var2 = var1;
            var1 = var1->sig;
        }
        var2->sig = nuevo;
    }
}

void Lista::Mostrar(void) {
    nodo *s = pInicio;
    while (s != NULL) {
        cout << s->dato << ",";
        s = s->sig;
    }
}

void Lista::MostrarInversa(void) {
    mostrarListaInverso(pInicio);
}

void Lista::mostrarListaInverso(nodo *s) {
    if (s != NULL) {
        mostrarListaInverso(s->sig);
        cout << s->dato << ",";
    }
}


int main(void)
{
    Lista lista;
    lista.agregar(1);
    lista.agregar(2);
    lista.agregar(3);
    lista.agregar(4);
    lista.agregar(5);
    
    cout << "Items de la lista:" << endl;
    lista.Mostrar();
    cout << endl << "Items de la lista en orden inverso:" << endl;
    lista.MostrarInversa();

    return 0;
}

