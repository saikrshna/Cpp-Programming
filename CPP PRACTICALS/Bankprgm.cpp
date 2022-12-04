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
     int choice=0;
     do{
        cout<<"Enter 1 for adding data\nEnter 2 for deposit\nEnter 3 for withdrawal\nEnter 4 for displaying\nEnter 5 for EXIT:";
        cin>>choice;
        switch(choice){
            case 1:
                   b.getdata();
                   break;
            case 2:
                   b.depositor();
                   break;
            case 3:
                   b.withdrawal();
                   break;
            case 4:
                   b.display();
                   break;
        }
     }while(choice!=5);
     
     return 0;
 }
