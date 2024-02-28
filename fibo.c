
#include<stdio.h>
// int fibo(int a){
//     if(a==0)
//      return 0;
//     if(a==1){
//        return 1;
//     }
//     else
//         return fibo(a-1)+fibo(a-2);
// }
int fibo(int n){
    int zero=0;
    int one=1;
     if(n==0)
     return 0;
     if(n==1){
       return 1;
    }

    for(int i=2;i<=n;i++){
        int temp=zero+one;
        zero=one;
        one=temp;
    }
    return one;
}
int main(){
    int n=5;
    for(int i=0;i<n;i++){
       int temp=fibo(i);
      printf("%d",temp);
        
    }
}
//teluska                                                                                   