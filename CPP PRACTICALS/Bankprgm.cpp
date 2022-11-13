#include<iostream>
using namespace std;

class BankAccount{
    public:
    int acc_no, deposit, withdraw;
    static int balance;
    string name, type;
    
    void getdata(){
        cout<<"Enter account holder name: ";
        cin>>name;
        cout<<"Enter account number: ";
        cin>>acc_no;
        cout<<"Enter account type: ";
        cin>>type;
        cout<<"Enter balance in account: ";
        cin>>balance;
    } 
    void depositor(){
        cout<<"\nEnter the amount to be desposited: ";
        cin>>deposit;
        balance=balance+deposit;
        cout<<"Present Balance: "<<balance;
    }
    void withdrawal(){
        cout<<"\nEnter the amount to be withdrawn: ";
        cin>>withdraw;
        if(balance<1000){
            cout<<"\nSorry! The amount takes below minimum balance";
        }else if(balance<withdraw){
            cout<<"\nSorry! Insufficient Balance";
        }else{
            cout<<"\nThe withdrawn amount = "<<withdraw;
            balance=balance-withdraw;
            cout<<"\nThe current balance after withdrawal = "<<balance;
        }
    }
    void display(){
        cout<<"\n\n---------DEPOSITOR----------"<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Account Number : "<<acc_no<<endl;
        cout<<"Account type : "<<type<<endl;
        cout<<"Balance : "<<balance<<endl;
    }
};
  int BankAccount :: balance=0;
 int main(){
     BankAccount b;
     b.getdata();
     b.depositor();
     b.withdrawal();
     b.display();
     return 0;
 }