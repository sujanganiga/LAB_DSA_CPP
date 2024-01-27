#include<iostream>
#include<string>
using namespace std;
 class personData{
      
      string lastname;
      string firstname;
      string address;
      string city;
    public:
        string state;
        void puts(){
            cout<<"enter name:";
            cout<<"first name\n";
            cin>>firstname;
            cout<<"last name \n";
            cin>>lastname;
            cout<<endl;
            cout<<"coustomer address :";
            cin>>address;
            cout<<endl;
            cout<<" city :";
            cin>>city;
            cout<<endl;
        }
        void gets(){
            cout<<"name:"<<firstname<<" "<<lastname<<endl;
            cout<<"coustomer address :"<<address<<endl;
            cout<<" city :"<<city<<endl;
        }
 };
 class coustomerData : public personData{
      string coustomernum;
      string email;
      public:
           static int count;
           void puts1(){
                puts();
                cout<<"enter the coustomer mob number :";
                cin>>coustomernum;
                cout<<endl<<"email is :";
                cin>>email;
                cout<<"state :";
                cin>>state;
           }
           void get1(){
                gets();
                cout<<"coustomer mob number :"<<coustomernum<<endl;
                cout<<"email is :"<<email<<endl;
                cout<<"state :"<<state<<endl;
           }
           coustomerData(){
            count++;
            cout<<count<<"\t created"<<endl;
           }
           ~coustomerData(){
            count--;
            cout<<count<<"\t distructed"<<endl;
           }
 };
 int coustomerData ::count=0;
 int main(){
    personData p1;
    coustomerData c1;
    c1.puts1();
    c1.get1();


 }