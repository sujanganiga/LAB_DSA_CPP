#include<stdio.h>
int fibo(int a){
    if(a==0)
     return 0;
    if(a==1){
       return 1;
    }
    else
        return fibo(a-1)+fibo(a-2);
}
int main(){
    int n=5;
    for(int i=0;i<n;i++){
       int temp=fibo(i);
      printf("%d",temp);
        
    }
}
//teluska                                                                                   