/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LaboEje26.cpp
 * Author: uca
 *
 * Created on 6 de septiembre de 2019, 14:51
 */

#include <cstdlib>
#include <iostream>

using namespace std;
struct var{
    string preal;
    string pimaginaria;
};

int main()
{
   struct var tomar;
   
   cout <<"Ingrese la parte real del numero complejo: " << endl;
   cin >> tomar.preal;
    cout <<"Ingrese la parte imaginaria del imaginaria complejo con su signo: " << endl;
   cin >> tomar.pimaginaria;
   
  if(tomar.pimaginaria[0] == '+'){
      tomar.pimaginaria[0]='-';
  }else{
      tomar.pimaginaria[0]='+';
  }
    std::cout << "el cojudao del numero complejo es:" << tomar.preal <<" "<<tomar.pimaginaria << std::endl;
   

    return 0;
}

