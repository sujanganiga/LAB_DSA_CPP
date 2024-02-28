#include<stdio.h>
int fact(int n){
   
    if(n<=0){
       return 0;
    }
    if(n==1||n==2){
        return 1;

    }
    else{
        return fact(n-2)*fact(n-1);
    }
}
int main(){
    int temp=fact(5);
    printf("%d",temp);
}