 #include <iostream>
 #include "factura.h"
 using namespace std;
 int main() 
 {
    Invoice factura1("12345", "Martillo", 5, 10);
    factura1.setTasaIVA(0.15);
    factura1.setTasaDescuento(0.05);

     cout << "Número de Parte: " << factura1.getNumeroDeParte() <<  endl;
     cout << "Descripción de Parte: " << factura1.getDescripcionDeParte() <<  endl;
     cout << "Cantidad: " << factura1.getCantidad() <<  endl;
     cout << "Precio Por Item: " << factura1.getPrecioPorItem() <<  endl;
     cout << "Tasa de IVA: " << factura1.getTasaIVA() <<  endl;
     cout << "Tasa de Descuento: " << factura1.getTasaDescuento() <<  endl;
     cout << "Monto de la Factura: " << factura1.getMontoFactura() <<  endl;

    return 0;
}
