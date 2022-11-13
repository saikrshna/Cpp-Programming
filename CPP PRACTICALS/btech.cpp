#include<iostream>
using namespace std;

class Student{
    public:
    int reg_no,age;
    string name;
    virtual void sort(int n){
        
    };
};

class Btech: public Student{
    public:
    int mark;
    void getdata(){
        cout<<"Enter student name: ";
        cin>>name;
        cout<<"Enter Reg No.: ";
        cin>>reg_no;
        cout<<"Enter student age: ";
        cin>>age;
        cout<<"Enter Mark out of 100: ";
        cin>>mark;
    }
    void sort(int n);
};

class Mtech: public Student{
    public:
    float cgpa;
    void input(){
        cout<<"Enter student name: ";
        cin>>name;
        cout<<"Enter Reg No.: ";
        cin>>reg_no;
        cout<<"Enter student age: ";
        cin>>age;
        cout<<"Enter CGPA out of 10: ";
        cin>>cgpa;
    }
    void sort(int n);
};
Btech b[10];
void Btech::sort(int n){
   for(int i=0;i<n;i++){
       Btech temp;
       for(int j=i+1;j<n;j++){
           if(b[i].mark>b[j].mark){
              temp=b[i];
              b[i]=b[j];
              b[j]=temp;
           }

           if(b[i].mark==b[j].mark){
               if(b[i].name>b[j].name){
                   temp=b[i];
                   b[i]=b[j];
                   b[j]=temp;
               }
           }
       }
   }

   cout<<"\nName\t\tReg_No\t\tAge\t\tMark";
   for(int i=0;i<n;i++){
       cout<<"\n"<<b[i].name<<"\t\t"<<b[i].reg_no<<"\t\t"<<b[i].age<<"\t\t"<<b[i].mark;
   }
}

Mtech m[10];
void Mtech :: sort(int mnum){
    for(int i=0;i<mnum;i++){
        Mtech temp;
        for(int j=i+1;j<mnum;j++){
            if(m[i].cgpa>m[j].cgpa){
                temp = m[i];
                m[i] = m[j];
                m[j] = m[i];
            }

            if(m[i].cgpa=m[j].cgpa){
                if(m[i].name>m[j].name){
                    temp = m[i];
                    m[i] = m[j];
                    m[j] = m[i];
                }
            }
        }
    }
   cout<<"\nName\t\tReg_No\t\tAge\t\tCgpa";
   for(int i=0;i<mnum;i++){
       cout<<"\n"<<m[i].name<<"\t\t"<<m[i].reg_no<<"\t\t"<<m[i].age<<"\t\t"<<m[i].cgpa;
   }
}

int main(){
    int bnum;
    cout<<"Enter the number of Btech students you wanna enter: ";
    cin>>bnum;
    for(int i=0;i<bnum;i++){
        b[i].getdata();
    }

    Student *student;
    student = new Btech();
    student->sort(bnum);

    int mnum;
    cout<<"\nEnter the number of Mtech students you wanna enter: ";
    cin>>mnum;
    for(int i=0;i<mnum;i++){
        m[i].input();
    }

    student = new Mtech();
    student->sort(mnum);
}

