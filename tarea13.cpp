#include <iostream>
#include "arreglo.h"
using namespace std;

int main(){

    Arreglo<string>arreglo;


    
    arreglo.insertar_final("mun");
    arreglo.insertar_final("do");
    arreglo.insertar_inicio("l");
    arreglo.insertar_inicio("ho");

    for(size_t i=0; i<arreglo.size();i++){
        cout<<arreglo[i]<<" ";
    }
    cout<<endl;
    arreglo.insertar("a", 2);

    for(size_t i=0; i<arreglo.size();i++){
        cout<<arreglo[i]<<" ";
    }
    cout<<endl;
    arreglo.eliminar_inicio();
    arreglo.eliminar_final();
    arreglo.eliminar(1);

    for(size_t i=0; i<arreglo.size();i++){
        cout<<arreglo[i]<<" ";
    }

    

    return 0;
}