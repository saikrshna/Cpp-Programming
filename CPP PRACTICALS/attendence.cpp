#include<iostream>
using namespace std;

class Student{
    public:
    int maths,social,science,attendence;
    string name;
    
    void getdata(){
        cout<<"\nEnter student name: ";
        cin>>name;
        cout<<"Enter Marks in maths: ";
        cin>>maths;
        cout<<"Enter marks in social: ";
        cin>>social;
        cout<<"Enter marks in science: ";
        cin>>science;
        cout<<"Enter Attendence percentage: ";
        cin>>attendence;
    }
    
    bool pass(){
        if((maths>=50)&&(social>=50)&&(science>=50)&&(attendence>=75)){
            return true;
        }else{
            return false;
        }
    }

    void printresult(){
        if(pass()){
            cout<<"Passed";
        }else{
            cout<<"Failed";
        }
    }
};

int main(){
    int num;
    Student s[10];
    cout<<"\n\nEnter the number of students: ";
    cin>>num;
    
    cout<<"\nEnter "<<num<<" number of students: ";
    for(int i=0;i<num;i++){
        s[i].getdata();
    }

    cout<<"\n\n\t\t---------------------Result---------------------"<<endl;
    cout<<"Name\t\tMaths\t\tSocial\t\tScience\t\tAttendence\tResult"<<endl;
    
    for(int i=0;i<num;i++){
        cout<<"\n"<<s[i].name<<"\t\t"<<s[i].maths<<"\t\t"<<s[i].social<<"\t\t"<<s[i].science<<"\t\t"<<s[i].attendence<<"\t\t";
        s[i].printresult();
    }

return 0;
}
