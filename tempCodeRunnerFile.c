#include<stdio.h>
int gcd(int a,int b){
   if(a>b){
    if(b==0){
       return a;
    }
    else
        return gcd(b,a%b);
   }
}
int main(){
    int temp=gcd(9,12);