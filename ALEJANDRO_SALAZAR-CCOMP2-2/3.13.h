#include <string>
#include <iostream>
using namespace std;
class Account{
    public:
    Account( string accountName, int initialBalance)
    : name{accountName}{
        if(initialBalance>0){
            balance=initialBalance;
        }
    }
    void deposit(int depositAmount){
        if (depositAmount >0){
            balance=balance + depositAmount;
        }
    }
    void cuenta(){
         cout <<endl<< "account: " << name<< " balance is $"<<balance;
    }
    int getBalance()const{
        return balance;
    }
    void retiro(int cr){
        if(balance>=cr){
            balance-=cr;
        }
        else{
            cout<<"El monto de retiro excedio el saldo de la cuenta";
        }
    }
    void setName( string accountName){
        name= accountName;
    }
     string getName() const{
        return name;
    }
    private:
     string name;
    int balance{0};
};