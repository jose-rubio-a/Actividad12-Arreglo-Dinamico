#include <iostream>
#include "arregloDinamico.h"

using namespace std;

int main(){
    ArregloDinamico arreglo;
    arreglo.insertar_final("Comentario #3");
    arreglo.insertar_final("Comentario #4");
    arreglo.insertar_final("Comentario #5");
    arreglo.insertar_final("Comentario #6");
    arreglo.insertar_final("Comentario #7");
    arreglo.insertar_final("Comentario #8");
    arreglo.insertar_final("Comentario #9");
    arreglo.insertar_final("Comentario #10");

    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout << arreglo[i] << endl;
    }
    arreglo.insertar_inicio("Comentario #2");
    arreglo.insertar_inicio("Comentario #1");

    cout << endl << "Arreglo Final" << endl;
    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout << arreglo[i] << endl;
    }
    
    return 0;
}
