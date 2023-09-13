 #include <iostream>
 using namespace std;
 class Date{
    public:
    Date(int mes,int año,int dia):mes_(mes),año_(año),dia_(dia){}
    void mirarm(int mes){
        if (mes<1 || mes>12){
        mes_=1;
    }}
    void setmes(int mes){
        mes_=mes;
    }
    void setaño(int año){
        año_=año;
    }
    void setdia(int dia){
        dia_=dia;
    }
    int getmes(){
        return mes_;
    }
    int getaño(){
        return año_;
    }
    int getdia(){
        return dia_;
    }
    void mostrar(){
        cout<<año_<<"/"<<mes_<<"/"<<dia_;
    }

private:
int dia_;
int año_;
int mes_;


 };