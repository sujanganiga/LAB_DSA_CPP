/*Develop a C++ program to sort using bubble sort by applying function templates.*/
#include<iostream>
using namespace std;

template<typename t>
t bubble(t a[], t b[], int n){
        for(int i=0;i<n/2;i++){
            for(int j=n-1;j>i;j--){
                if(a[j]<a[j-1]){
                    swap(a[j],a[j-1]);
                }
            }
        }
}
int main(){
    int a[5]={2,4,3,5,1};
    bubble(a,a,5);
    for(int i=0;i<5;i++){
        cout<<a[i]<<"\t";
    }
}
