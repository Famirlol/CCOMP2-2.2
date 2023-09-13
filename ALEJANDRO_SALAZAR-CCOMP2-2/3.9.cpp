
 #include <iostream>
 #include "clase.h"
 using namespace std;
 int main()
 {
    Account account1{"Jane Green",50};
    Account account2{"John Blue",0};
 cout << "account1: " << account1.getName() << " balance is $"<<account1.getBalance();
 cout << "\naccount2: " << account2.getName() << " balance is $"<<account2.getBalance(); ;
 cout << "\n\nEnter deposit amount for account1: "; 
 int depositAmount;
 cin >> depositAmount; 
 cout << "adding " << depositAmount << " to account1 balance";
 account1.deposit(depositAmount);
 cout << "\n\naccount1: " << account1.getName() << " balance is $"
 << account1.getBalance();
 cout << "\naccount2: " << account2.getName() << " balance is $"
 << account2.getBalance();
 cout << "\n\nEnter deposit amount for account2: ";
 cin >> depositAmount;
 cout << "adding " << depositAmount << " to account2 balance";
account2.deposit(depositAmount);
int r;
cout<<endl<<"ingrese la cantidad a retirar de:"<<account1.getName();cin>>r;
account1.retiro(r);
cout<<"ingrese la cantidad a retirar de:"<<account2.getName();cin>>r;
account2.retiro(r);
 cout << "\n\naccount1: " << account1.getName() << " balance is $"<< account1.getBalance();
 cout << "\naccount2: " << account2.getName() << " balance is $"<< account2.getBalance() << endl;
 }