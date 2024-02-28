#include<iostream>
#include<string>
using namespace std;

class person{
string name;
int age;
public:

    void read(){
            cout<<"enter name  :\t";
            cin>>name;
            cout<<endl<<"enter the age  : \t";
            cin>>age;

}
    void display(){
            cout<<"name  :\t"<<name;
            cout<<endl<<"he age  : \t"<<age;
}

};
class student:virtual public person{
string usn;
string sec;
public:
   
    void read1(){
            read();
            cout<<"enter usn of student  :\t";
            cin>>usn;
            cout<<endl<<"enter the section where student belongs  : \t";
            cin>>sec;

}
    void display1(){
            display();
            cout<<"usn of student  :\t"<<usn;
            cout<<endl<<"stuent section : \t"<<sec;
}
       
};
class faculty:virtual public person{
        string fac_id;
        string sec_handling;
public:

    void read2(){
        void read();
        cout<<endl<<"enter faculty id  :\t";
        cin>>fac_id;
        cout<<endl<<"enter the sections handling  : \t";
        cin>>sec_handling;

}
    void display2(){
            void display();
            cout<<"faculty id is  :\t"<<fac_id;
            cout<<endl<<"sections handling: \t"<<sec_handling;
}

};
class ta : public student, public faculty{
                string college;
                string total;
                string total1;
    public:

        void    read3(){
                    cout<<endl<<"student details"<<endl;
                    read1();
                    cout<<endl<<"faculty details"<<endl;
                     read2();
                    cout<<"enter college name :\t";
                    cin>>college;
                    cout<<endl<<"enter total number of student  : \t";
                    cin>>total;
                    cout<<endl<<"enter total number of faculty  : \t";
                    cin>>total1;

      }
        void display3(){
                     cout<<"student details"<<endl;
                    display1();
                     cout<<"faculty details"<<endl;
                    display2();
                        cout<<"college name :\t"<<college;
                        cout<<endl<<"total number of student  : \t"<<total;
                        cout<<endl<<"total number of faculty  : \t"<<total1;
        }
};

int main(){
  class ta ta1;
  ta1.read3();
  ta1.display3();
//   cout<<" student details :"<<endl;
//   ta1.student::read1();
//   ta1.student::display1();
//   cout<<" faculty  details :"<<endl;
//   ta1.faculty::read2();
//   ta1.faculty::display2();
  }

