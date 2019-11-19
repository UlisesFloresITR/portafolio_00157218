/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Labo6-2.cpp
 * Author: ulises
 *
 * Created on 16 de noviembre de 2019, 05:15 PM
 */

#include <iostream>
#include <vector>

using namespace std;

vector<int> lista;

struct nodo{
    int info;
    struct nodo *izq;
    struct nodo *der;
};
typedef struct nodo Nodo;
typedef struct nodo *Arbol;
typedef struct nodo *Espejo;

Arbol crearArbol(int x){
    Arbol p = new Nodo;
    p->info = x;
    p->izq = NULL;
    p->der = NULL;
    return p;
}

void asignarIzq(Arbol a, int Dato){
    if(a == NULL)
        cout << "Error: arbol vacio" << endl;
    else if(a->izq != NULL)
        cout << "Error: subarbol IZQ ya existe" << endl;
    else
        a->izq = crearArbol(Dato);
}

void asignarDer(Arbol a, int Dato){
    if(a == NULL)
        cout << "Error: arbol vacio" << endl;
    else if(a->der != NULL)
        cout << "Error: subarbol DER ya existe" << endl;
    else
        a->der = crearArbol(Dato);
}

void agregarNodo(Arbol a){
    
    int num = 0;
    cout << "Numero a agregar: ";
    cin >> num;
    
    Arbol p = a;
    
    while(true){
        if(num == p->info){
            cout << "Error: " << num << " ya existe" << endl;
            return;
        }
        else if(num < p->info){
            if(p->izq == NULL)
                break;
            else
                p = p->izq;
        }
        else{
            if(p->der == NULL)
                break;
            else
                p = p->der;
        }
    }
    
    
    if(num < p->info)
        asignarIzq(p, num);
    else
        asignarDer(p, num);
}

void Buscar(Arbol a, int n){
    if(a != NULL){
        lista.push_back(a->info);
        Buscar(a->izq, n);
        Buscar(a->der, n);   
    }
}
void mostrarLista(int n) {
    for (int i = 0; i < lista.size(); i++) {
            cout << lista[i] << endl;
            if(lista[i]==n){
                break;
            }
    }
}


int main(){
    int variable = 0, n;
    cout<<"Inicializando arbol...\nValor contenido en la raiz: ";
    cin >> variable;

    Arbol arbol = crearArbol(variable);

    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar\n\t2) Recorrer"
            << "\n\t3) Salir\n\tOpcion elegida: ";
        
        cin >> opcion;
        switch(opcion){
            case 1: agregarNodo(arbol);
            break;
            case 2: cout<<"Numero a buscar: ";
                    cin>>n;
                    Buscar(arbol, n);
                    cout<<"Recorrido: "<<endl;
                    mostrarLista(n);
            break;
            case 3: continuar = false;
            break;
            default: cout << "Error!" << endl;
            break;
        }
    }while(continuar);
    
    return 0;
}
