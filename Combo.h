#ifndef COMBO_H
#define COMBO_H
#include "Producto.h"

class Combo:public Producto{
    public:

        Combo();
        Combo(string _nombre, int _precio, int _peso, int _clave);

        string str();
        int calculaTotalPagar();

    private:

        int clave;

};

#endif