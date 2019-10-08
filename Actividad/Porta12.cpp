/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Porta12.cpp
 * Author: ulises
 *
 * Created on 8 de octubre de 2019, 03:22 PM
 */
#include <iostream>
#include <cstdio>
#include <stdlib.h>
#include <time.h>
#include <cmath>
#include <iomanip>
#include <vector>
using namespace std;

struct Orden{
    string revueltas;
    string FrijoConQueso;
    string Queso;
    string tipo;
};
typedef struct Orden Ordenes;

Ordenes solicitarOrden(){
    Ordenes p;
    cout << "Revueltas: "; cin >> p.revueltas;
    cout << "Frijol Con Queso: ";   cin >> p.FrijoConQueso;
    cout << "Queso: "; cin >> p.Queso;
    cout << "Arroz/Maiz: "; cin >> p.tipo;
    return p;
}

void mostrarOrden(Ordenes p){
    cout << "Orden"<<  endl;
    cout << "Revueltas: " << p.revueltas << endl;
    cout << "Frijo con Queso: " << p.FrijoConQueso << endl;
    cout << "Queso: " << p.Queso << endl;
    cout << "De "<< p.tipo << endl;
    cout << endl;
}

vector<Ordenes> lista;

void agregarOrden(){
    Ordenes p = solicitarOrden();
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "\t1) Al principio\n\t2) Al final"
            << "\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: lista.insert(lista.begin(), p);
                continuar = false;
            break;
            case 2: lista.push_back(p);
                continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
}

void mostrarLista() {
    for (int i = 0; i < lista.size(); i++) 
        mostrarOrden(lista[i]);
}

int main(){
    cout << "Inicializando..." << endl;
    
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar Pupusas\n\t2) Ver Lista de ordenes"
            << "\n\t3) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: cout << "Agregando..." << endl;
                agregarOrden();
            break;
            case 2: cout << "Listando..." << endl;
                mostrarLista();
            break;
            case 3: continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);

    return 0;
}

