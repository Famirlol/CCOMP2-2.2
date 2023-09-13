#include <iostream>
#include <string>
using namespace std;
class carro {
public:

    carro( string marca,  string gasolina, int añomanufactura,  string color, int capacidaddelmotor)
        : marca_(marca), gasolina_(gasolina), añomanufactura_(añomanufactura), color_(color), capacidaddelmotor_(capacidaddelmotor) {}
    void setmarca(string marca){
        marca_=marca;
    }
    void setgasolina(string gasolina){
        gasolina_=gasolina;
    }
    void setañomanufactura(int y){
        añomanufactura_=y;
    }
    void setcolor(string color){
        color_=color;
    }
    void setcapacidaddelmotor(int capacidad){
        capacidaddelmotor_=capacidad;
    }

    string getmarca(){
        return marca_;
    }
    string getgasolina(){
        return gasolina_;
    }
    int getañomanufactura(){
        return añomanufactura_;
    }
    string getcolor(){
        return color_;
    }
    int getcapacidaddelmotor(){
        return capacidaddelmotor_;
    }
    void Mostrar(){
    cout<<"marca "<<marca_<<endl;
    cout<<"tipo de gasolina "<<gasolina_<<endl;
    cout<<"año "<<añomanufactura_<<endl;
    cout<<"capacidad del motor "<<capacidaddelmotor_<<endl;
    }
    private:
    string marca_;
    string gasolina_;
    int añomanufactura_;
    string color_;
    int capacidaddelmotor_;
};
