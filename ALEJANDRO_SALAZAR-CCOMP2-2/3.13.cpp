
 #include <iostream>
 #include "3.13.h"
 using namespace std;
 int main()
 {
    Account account1{"Jane Green",50};
    Account account2{"John Blue",0};
account1.cuenta();
account2.cuenta();
 cout << "\n\nEnter deposit amount for account1: "; 
 int depositAmount;
 cin >> depositAmount; 
 cout << "adding " << depositAmount << " to account1 balance";
 account1.deposit(depositAmount);
account1.cuenta();
account2.cuenta();
 cout << "\n\nEnter deposit amount for account2: ";
 cin >> depositAmount;
 cout << "adding " << depositAmount << " to account2 balance";
account2.deposit(depositAmount);
int r;
cout<<endl<<"ingrese la cantidad a retirar de:"<<account1.getName();cin>>r;
account1.retiro(r);
cout<<"ingrese la cantidad a retirar de:"<<account2.getName();cin>>r;
account2.retiro(r);
account1.cuenta();
account2.cuenta();
 }