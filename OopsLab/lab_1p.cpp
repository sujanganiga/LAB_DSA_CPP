#include<iostream>
using namespace std;
//gross=basic+da
//net=basic+da-it;
//da=52%basic;
//it=30%basic;
class emp{
        int emp_no;
        string name;
        float basic;
        float da;
        float it;
        float net_salary;
        float gross;
    public:
        void getdata(){
            cin>>emp_no;
            cout<<endl;
            cin>>name;
            cout<<endl;
            cin>>basic;
            cout<<endl;
           // cin>>it;
           // cout<<endl;
            //cin>>da;
        }
        void calc(){
            da=0.52*basic;
            it=0.3*basic;
            gross=basic+da;
            net_salary=basic+da-it;
        }
        void putdata(){
            calc();
            cout<<name<<endl<<emp_no<<endl<<basic<<endl<<da<<endl<<it<<endl<<gross<<net_salary<<endl;
        }
};
int main(){
    emp suj;
    suj.getdata();
    suj.putdata();

}