#include <iostream>
#include "arreglo.h"
#include "computadora.h"
using namespace std;

int main(){
    arreglo_dinamico<Computadora> computadora;
    Computadora PC1(1024, "Windows", "AMD", "angel");
    Computadora PC2(2048, "Linux", "Intel", "Ruben");
    Computadora PC3(4196, "MAC", "Intel", "Diego");

    computadora << PC1 << PC2 << PC3 << PC2 << PC2;
    Computadora PC4(2048, "Linux", "Intel", "Ruben");
    
    arreglo_dinamico<Computadora*> ptrs = computadora.buscar_todos(PC4);
    if(ptrs.size() > 0){
        for (size_t i = 0; i < ptrs.size(); i++){
            Computadora *c = ptrs[i];
            cout << *c << endl;
        }
    }
    else{
        cout <<"SIN COINCIDENCIAS" << endl;
    }
    
    /*Computadora *ptr = computadora.buscar(PC4);
    
    if(ptr != nullptr){
    cout << *ptr << endl;
    }
    else{
        cout << "NO EXISTE" << endl;
    }*/

    /*arreglo_dinamico<string> arreglo;

    for(size_t i = 0; i < 1; i++){
       arreglo.insertar_final("tres");
    }

    arreglo.insertar_final("cuatro");
    arreglo.insertar_final("cinco");
    arreglo.insertar_inicio("uno");
    arreglo.insertar_inicio("cero");
    arreglo.insertar("dos", 2);
    arreglo.eliminar_inicio();
    arreglo.eliminar_final();
    arreglo.eliminar(1);
    for (size_t i = 0; i < arreglo.size(); i++){
        cout << arreglo[i] << " ";
    }
    cout <<endl;
    string *s = arreglo.buscar("cuatro");
    cout << s << " " << *s <<endl;
    *s = "siete";

    for (size_t i = 0; i < arreglo.size(); i++){
        cout << arreglo[i] << " ";
    }
    cout <<endl;*/
}