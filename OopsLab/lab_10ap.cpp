/*
a) Illustrate class templates in a C++ program for the following operations: Adding
two arrays, finding the max and min in an array.
*/

#include<iostream>
using namespace std;

template  <class t>

class arrays{
    t a[3];
    t b[4];
    public:
        arrays(t a1[], t b1[]){
            for(int i=0;i<2;i++){
                a[i]=a1[i];
                b[i]=b1[i];
            }
        }
        void sum(){
            for(int i=0;i<2;i++){
                cout<<a[i]+b[i]<<'\t';
            }
            cout<<endl;
        }
        t max(int n,t arr[],t maxi =-1){
            if(n>=0){
                if(maxi<arr[n]){
                    maxi=arr[n];
                }
                n--;
                return max(n,arr,maxi);
            }
            else{
                return maxi;
            }

        }
        t min(int n,t arr[],t mini =INT8_MAX){
            if(n>=0){
                if(mini>arr[n]){
                    mini=arr[n];
                }
                n--;
                return min(n,arr,mini);
            }
            else{
                return mini;
            }

        }
};
int main(){
    int s1[2]={8,2};
    int s2[2]={7,4};
    arrays <int> mat(s1,s2);
    mat.sum();
    cout<<"max :"<<mat.max(1,s1)<<endl;
    cout<<"min :"<<mat.min(1,s2)<<endl;
    float s3[2]={5.45,2.55};
    float s4[2]={7.45,4.45};
    arrays <float> mat1(s3,s4);
    mat1.sum();
    cout<<"max :"<<mat1.max(1,s3)<<endl;
    cout<<"min :"<<mat1.min(1,s4)<<endl;
}
