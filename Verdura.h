#ifndef VERDURA_H
#define VERDURA_H
#include "Producto.h"


class Verdura:public Producto{
    public:
    
        Verdura();
        Verdura(string _nombre,int _precio, int _peso,string _temporada);

        string str();
        int calculaTotalPagar();

    private:

        std::string temporada;
        

};

#endif