#include<iostream>
using namespace std;
class student{
    public:
    int a,b,c,average;
    string name;
    void getdata(){
       cout<<"Enter the name of student: ";
       cin>>name;
       cout<<"Enter Maths mark: ";
       cin>>a;
       cout<<"Enter Social mark: ";
       cin>>b;
       cout<<"Enter Science mark: ";
       cin>>c;
    }
    void averagecalculator(){
        average=(a+b+c)/3;
    }
   
};

int main(){
    int num;
    student s[10];
    cout<<"Enter the number of students you want to enter: ";
    cin>>num;
    cout<<"Enter "<<num<<" number of students: ";
    for(int i=0;i<num;i++){
        cout<<"\n";
        s[i].getdata();
        s[i].averagecalculator();
    }

    for(int i=0;i<num;i++){
        for(int j=i+1;j<num;j++){
            if(s[i].average<s[j].average){
                student temp;
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    
    cout<<"Name\t\tMaths\t\tSocial\t\tScience\t\tAverage";
    for(int i=0;i<num;i++){
      cout<<"\n"<<s[i].name<<"\t\t"<<s[i].a<<"\t\t"<<s[i].b<<"\t\t"<<s[i].c<<"\t\t"<<s[i].average;
    }
    return 0;
}