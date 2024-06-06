#include "Verdura.h"

Verdura::Verdura():Producto(){

    temporada="Invierno";

}

Verdura::Verdura(string _nombre,int _precio, int _peso,string _temporada):Producto(_nombre,_precio,_peso){

    temporada=_temporada;

}

string Verdura::str(){

    return nombre+"-$"+to_string(precio)+"-"+to_string(peso)+"-$"+to_string(calculaTotalPagar())+"-"+temporada;

}
int Verdura::calculaTotalPagar(){

    if (temporada=="Junio"){
        return peso*precio*2;
    }
    else if (temporada=="Regalado"){
        return peso*precio*3;
    }
    else{
        return peso*precio*10;
    }

}