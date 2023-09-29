#include <iostream> 
using namespace std;

void imprimir_rec(const int arr[],int tam,int i=0){
    if(tam==0){
        return;
    }
    cout<<arr[i]<<" ";
    imprimir_rec(arr,tam-1,++i);}
/*void invertir(int arr[],int tam){
for(int i=0;i<tam/2;i++){
int tmp=arr[i];
arr[i]=arr[tam-i-1];
arr[tam-i-1]=tmp;
}
return ;
}*/
void intercambio(int &a,int &b){
    int tmp=a;
    a=b;
    b=tmp;
}
/*void invertir(int arr[],int tam){
for(int i=0;i<tam/2;i++){
intercambio(arr[i],arr[tam-i-1]);
}}*/
void recursivo(int arr[],int tam,int i=0){
    if(i>tam){
        return ;
    }
    intercambio(arr[i],arr[tam-1]);
    recursivo(arr,tam-1,i+1);
}

int main() {
 int a[]{1,2,3,4,5};
 imprimir_rec(a,5);
 recursivo(a,5);
 cout<<endl;
 imprimir_rec(a,5);
}