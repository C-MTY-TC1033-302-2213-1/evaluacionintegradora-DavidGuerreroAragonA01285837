#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <string>
using namespace std;

class Producto{

    public:

        Producto();
        Producto(string _nombre,int _precio,int peso);

        void setNombre(string _nombre);
        void setPrecio(int _precio);
        void setPeso(int _peso);

        string getNombre();
        int getPrecio();
        int getPeso();
        
        virtual string str();
        virtual int calculaTotalPagar();

    protected:

        string nombre;
        int precio;
        int peso;

};

#endif