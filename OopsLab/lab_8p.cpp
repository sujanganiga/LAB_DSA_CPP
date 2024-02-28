#include<iostream>
using namespace std;
class person{
    string name;
    int age;
    public:
         void setname(){
            cout<<"enter name :";
            cin>>name;
         } 
         void setage(){
            cout<<"enter age :";
            cin>>age;
         } 
         int getage(){
            return age;
         }
         string  getname(){
            return name;
         }

};     

class faculty : virtual public person{
    string branch;
    string sec;
    public:
        void read(){
            setname();
            setage();
            cout<<"enter the branch:"<<endl;
            cin>>branch;
            cout<<"enter the sections"<<endl;
            cin>>sec;            
        }
        void display(){
            cout<<"name -->"<<getname()<<endl;
            cout<<"age -->"<<getage()<<endl;
            cout<<"brach -->"<<branch<<endl;
            cout<<"section -->"<<sec<<endl;
        }
};
class student : virtual public person{
    string usn;
    string secn;
    public:
            void read(){
                setname();
                setage();
                cout<<"enter the usn:"<<endl;
                cin>>usn;
                cout<<"enter the sections"<<endl;
                cin>>secn;
            }
        void display(){
            cout<<"name -->"<<getname()<<endl;
            cout<<"age -->"<<getage()<<endl;
            cout<<"usn -->"<<usn<<endl;
            cout<<"section -->"<<secn<<endl;
        }

};
class ta:public student,public faculty{
        int total;
    public:
        void settotal(){
            cout<<"enter the total no of students and faculty :";
            cin>>total;
        }
        void displayall(){
            cout<<"total number of students :"<<total;
            cout<<"faculty details :"<<endl;
            faculty::display();
        }
};
int main(){
    ta bms;
    bms.settotal();
    bms.student::read();
    cout<<"student details :"<<endl;
    bms.student::display();
    bms.faculty::read();
    //bms.getage() we can do
    bms.displayall();
}