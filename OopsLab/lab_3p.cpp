/*3. Write a C++ program to create a class called COMPLEX and implement the following overloading functions ADD that return a COMPLEX number. 

                        i. ADD (a, s2) – where a is an integer (real part) and s2 is a complex number. 

                        ii. ADD (s1, s2) – where s1 and s2 are complex numbers.
*/
#include<iostream>
using namespace std;

class complex{
    int r;
    int i;
    public:
        void read(){
            cout<<"enter the real part of qn";
            cin>>r;
            cout<<endl<<"enter the img part of qn";
            cin>>i;        
        }
        void ADD(int a, complex s2){
            cout<<endl<<"OUTPUT IS:"<<endl<<a+s2.r<<" + "<<s2.i<<" i ";
        }
        void ADD(complex s1, complex s2){
            cout<<endl<<"OUTPUT IS:"<<endl<<s2.r+s1.r<<" + "<<s1.i+s2.i<<" i ";
        }
};
int main(){
    complex s1,s2;
    int a;
    char ch;
    cout<<"I or II ?? ->";
    cin>>ch;
    cout<<endl;

    if(ch=='i'||ch=='I'){
        cout<<"enter the number a";
        cin>>a;
        cout<<endl<<"enter value for complex s2 :"<<endl;
        s2.read();
        s2.ADD(a,s2);
    }
    else if(ch!='i'||ch!='I'){
        cout<<endl<<"enter value for complex s1 :"<<endl;
        s1.read();
        cout<<endl<<"enter value for complex s2 :"<<endl;
        s2.read();
        s2.ADD(s1,s2);

    }
}

