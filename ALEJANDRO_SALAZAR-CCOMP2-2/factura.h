#include <iostream>
#include <string>
using namespace std;
class Invoice {
public:
    Invoice(string numeroDeParte,   string descripcionDeParte, int cantidad, int precioPorItem,
            double tasaIVA = 0.20, double tasaDescuento = 0.0)
        : numeroDeParte(numeroDeParte),descripcionDeParte(descripcionDeParte),cantidad((cantidad ) ),precioPorItem((precioPorItem )),tasaIVA(tasaIVA),tasaDescuento((tasaDescuento )) {
    }
    string getNumeroDeParte() const {
        return numeroDeParte;
    }

    void setNumeroDeParte(const   string& nuevoNumeroDeParte) {
        numeroDeParte = nuevoNumeroDeParte;
    }

    string getDescripcionDeParte() const {
        return descripcionDeParte;
    }
    void setDescripcionDeParte(const   string& nuevaDescripcionDeParte) {
        descripcionDeParte = nuevaDescripcionDeParte;
    }

    int getCantidad() const {
        return cantidad;
    }

    void setCantidad(int nuevaCantidad) {
        if (nuevaCantidad > 0) {
            cantidad = nuevaCantidad;
        }
    }

    int getPrecioPorItem() const {
        return precioPorItem;
    }

    void setPrecioPorItem(int nuevoPrecioPorItem) {
        if (nuevoPrecioPorItem > 0) {
            precioPorItem = nuevoPrecioPorItem;
        }
    }

    double getTasaIVA() const {
        return tasaIVA;
    }

    void setTasaIVA(double nuevaTasaIVA) {
        tasaIVA = nuevaTasaIVA;
    }

    double getTasaDescuento() const {
        return tasaDescuento;
    }

    void setTasaDescuento(double nuevaTasaDescuento) {
        if (nuevaTasaDescuento >= 0) {
            tasaDescuento = nuevaTasaDescuento;
        }
    }

    double getMontoFactura() const {
        double subtotal = cantidad * precioPorItem;
        double montoIVA = subtotal * tasaIVA;
        double montoDescuento = subtotal * tasaDescuento;
        return subtotal + montoIVA - montoDescuento;
    }

private:
    string numeroDeParte;
    string descripcionDeParte;
    int cantidad;
    int precioPorItem;
    double tasaIVA;
    double tasaDescuento;
};