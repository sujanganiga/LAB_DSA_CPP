#include<stdio.h>
int tower(int n){
   
    if(n==0){
       return 1;
    }
    else{
        return n*tower(n-1);
    }
}
int main(){
    int temp=tower(3);
    printf("%d",temp);
}