/*
4. Write a program to find the transpose of a matrix using friend function and with member functions to read and display the matrix.
*/

#include<iostream>
using namespace std;

class matrix{
        int a[2][2];
        int ta[2][2];
        public:
            void read(){
                for(int i=0;i<2;i++){
                    for(int j=0; j<2 ;j++){
                        cout<<"enter matrix["<<i<<"]"<<"["<<j<<"] element -> ";
                        cin>>a[i][j];                   
                    }
                }
            }
            friend void trans(matrix &temp);
            void displaynorm(){
            cout<<"ENTERED MATRIX :"<<endl;
               for(int i=0;i<2;i++){
                    for(int j=0; j<2 ;j++){
                        cout<<a[i][j]<<"\t";                   
                    }
                    cout<<endl;
                } 
            }
            void displaytran(){
                cout<<"TRANSPOSE MATRIX: "<<endl;
                for(int i=0;i<2;i++){
                    for(int j=0; j<2 ;j++){
                        cout<<ta[i][j]<<"\t";                   
                    }
                    cout<<endl;
                } 
            }
};
void trans(matrix &temp){
    for(int i=0;i<2;i++){
        for(int j=0; j<2 ;j++){
            temp.ta[j][i]=temp.a[i][j];                   
            }
    }
}
int main(){
    matrix mat;
    mat.read();
    mat.displaynorm();
    trans(mat);
    mat.displaytran();
}
