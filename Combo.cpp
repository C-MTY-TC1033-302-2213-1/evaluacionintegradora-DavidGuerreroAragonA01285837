#include "Combo.h"

Combo::Combo():Producto(){

    clave=0;

}
Combo::Combo(string _nombre, int _precio, int _peso, int _clave):Producto(_nombre,_precio,_peso){

    nombre=_nombre;
    precio=_precio;
    peso=_peso;
    clave=_clave;

}

string Combo::str(){

    return nombre+"-$"+to_string(precio)+"-"+to_string(peso)+"-$"+to_string(calculaTotalPagar())+"-"+to_string(clave);

}
int Combo::calculaTotalPagar(){

    int costo;
    costo=precio*peso*clave;

    if (clave==1){
        costo-=25*costo/100;
    }
    else if(clave==2){
        costo-=30*costo/100;
    }

    return costo;

}