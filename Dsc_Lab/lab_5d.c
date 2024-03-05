#include<stdio.h>
#include<stdlib.h>

int toh(int n,char s, char t , char d){
    if(n>0){
        toh(n-1,s,d,t);
        printf("%d is move from %c to %c \n",n,s,d);
        toh(n-1,t,s,d);
    }

}



int main(){
    toh(3,'a','b','c');
}