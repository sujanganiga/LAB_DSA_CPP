#include<stdio.h>
int tower(int n,char s, char t, char d){
   
if(n>0){
    tower(n-1,s,d,t);
    printf("%d is moved from %c to %c \n",n,s,d);
    tower(n-1,t,s,d);


}
}
int main(){
    int temp=tower(3,'s','t','d');
    
}