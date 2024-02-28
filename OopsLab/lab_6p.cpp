/*Operator Overloading: Develop a C++ program to create a class called MATRIX using a two-dimensional array of integers. Illustrate == operator overloading which checks the compatibility of two matrices M1 and M2 for addition and subtraction. Find the sum and difference of matrices by overloading the operators + and – respectively. Display the results (sum matrix M3 and difference matrix M4).*/
#include<iostream>
using namespace std;
class matrix{
        int r,c;
        int mat[5][5];
    public:
        matrix(){
            cout<<"enter the no of rows";
            cin>>r;
            cout<<endl<<"enter the no of cols";
            cin>>c;
            for(int i=0;i<r;i++){
                    for(int j=0; j<c;j++){
                        cout<<"enter matrix["<<i<<"]"<<"["<<j<<"] element -> ";
                        cin>>mat[i][j];                   
                    }
                }
        }
        matrix(int a){
            mat[1][1]={0};
        }
        bool operator==(matrix &a){
            if(a.r==r&&c==a.c)
            return true;
            else
            return false;
        }
        void operator+(matrix &a){
            matrix M3(0);
            for(int i=0;i<r;i++){
                for(int j=0; j<c;j++){
                    M3.mat[i][j]=mat[i][j]+a.mat[i][j];
                    }
                }
            M3.display();
        }
        void operator-(matrix &a){
            matrix M4(0);
            for(int i=0;i<r;i++){
                for(int j=0; j<c;j++){
                    M4.mat[i][j]=mat[i][j]-a.mat[i][j];
                    }
                }
            M4.display();
        }
         void display(){
            cout<<"ENTERED MATRIX :"<<endl;
               for(int i=0;i<2;i++){
                    for(int j=0; j<2 ;j++){
                        cout<<mat[i][j]<<"\t";                   
                    }
                    cout<<endl;
                } 
            }
};

int main(){
    matrix a1, a2;
    if(a1==a2){
        cout<<"addition"<<endl;
        a1+a2;
        cout<<"subtraction:"<<endl;
        a1-a2;
    }
    else{
        cout<<"matrix not equal";
    }

}
