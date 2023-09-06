#include <iostream>

using namespace std;

int main()
{
int a,b,c,d,e;
cout<<"escriba los 5 enteros";cin>>a>>b>>c>>d>>e;
int m, me;
if (a>=b and a>=c and a>=d and a>=e){
        m=a;
        } 
if (b>=a and b>=c and b>=d and b>=e){
        m=b;
        } 
if (c>=b and c>=a and c>=d and c>=e){
        m=c;
        } 
if (d>=b and d>=c and d>=a and d>=e){
        m=d;
        } 
if (e>=b and e>=c and e>=a and e>=d){
        m=e;
        } 
if (a<=b and a<=c and a<=d and a<=e){
        me=a;
        } 
if (b<=a and b<=c and b<=d and b<=e){
        me=b;
        } 
if (c<=b and c<=a and c<=d and c<=e){
        me=c;
        } 
if (d<=b and d<=c and d<=a and d<=e){
        me=d;
        } 
if (e<=b and e<=c and e<=a and e<=d){
        me=e;
        } 
cout<<" El mayor es"<<m<<" y el menor es"<<me;
return 0;
}