#include<iostream>
using namespace std;

class student{
        int mark[3][6];
        int avg[6];
        public:
            void input();
            void display();
};
int minf(int a,int b,int c ){
    if(a<b&&a<c){
        return a;
    }
    else if(b<a&&b<c){
        return b;
    }
    else{
        return c;
    }
}
void student::input(){
     for(int s=1;s<3;s++){
        for(int t=1;t<4;t++){
            cout<<"enter the marks for test-> "<<t<<" of sub-> "<<s<<" ->";
            cin>>mark[s][t];
        }
        avg[s]=((mark[s][1] +mark[s][2]+mark[s][3])-minf(mark[s][1] ,mark[s][2],mark[s][3]))/2;
        cout<<endl<<"avg mark on sub ->"<<s<<"is ->"<<avg[s]<<endl;
        
     }
}
int main(){
    student suj;
    suj.input();
}