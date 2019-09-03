#include <iostream>

using namespace std;

bool bBinaria(int arr[], int base, int tope, int e){
    int aux;
    aux = (base+tope)/2;

    if(arr[aux]!=e && (base==tope)) return false;
    if(arr[aux]==e) return true;
    if(arr[aux]<e) return bBinaria(arr, aux+1, tope, e);
    if(arr[aux]>e) return bBinaria(arr, base, aux-1, e);
}

int main(){
    int n, e;
    cout << "Proporcione el tamaño del arreglo"<<endl;
    cin >> n;
    int arr[n-1];

    cout <<"Introduzca elementos en el arreglo"<<endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout <<"Elemento a buscar"<<endl;
    cin >> e;

    if(bBinaria(arr, 0, n-1, e)) cout << "El elemento se encuentra en el arreglo"<<endl;
    else cout << "No se encontro el elemento" <<endl;

    return 0;
}