#include <iostream>

using namespace std;

int main()
{
float kg,m,bmi;
cout<<"ingrese su peso en kilogramos y su altura en metros";cin>>kg>>m;
bmi=kg*(m*m);
cout<<"BMI VALUES"<<endl<<"bajo de peso: menos de 18.5"<<endl<<"normal:  entre 18.5 y 24.9"<<endl<<"sobrepeso:   entre 25 y 29.9"<<endl<<"obeso:  30 o mas"<<endl;
cout<<"su BMI es"<<bmi<<endl;
if(bmi<18.5){
    cout<<"la persona esta bajo de peso";
}
if(bmi>=18.5 and bmi<=24.9){
    cout<<"la persona esta normal";
}
if (bmi>=25 and bmi<=29.9){
    cout<<"la persona tiene obesidad";
}
if(bmi>=30){
    cout<<"la persona es obesa";
}
}
