#include<stdio.h>
int fact(int n){
   
    if(n==0){
       return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int main(){
    int temp=fact(3);
    printf("%d",temp);
}