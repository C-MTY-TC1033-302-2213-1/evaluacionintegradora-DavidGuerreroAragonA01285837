#ifndef PEDIDO_H
#define PEDIDO_H
#include <stdio.h>
#include <sstream>
#include <fstream>
#include "Verdura.h"
#include "Producto.h"
#include "Combo.h"
#include <iostream>

const int MAX_PROD=50;

class Pedido{

    public:

        Pedido();

        void leerArchivo(string nombre);
        void ticketCliente();

    private:

        Producto *arrPtrProductos[MAX_PROD];
        int cantidad;
};

#endif