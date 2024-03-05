#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define Max 25
int stack[Max];
int top =-1;
int priority(char t){
    if(t=='('){
        return 0;
    }
    if(t=='+'||t=='-'){
        return 1;
    }
    if(t=='*'||t=='/'){
        return 2;
    }
    else{
        return 0;
    }

}
 void push(char c){
    stack[++top]=c;
 }
 char pop(){
    return stack[top--];
 }
int main(){
        char s[100],x ;
        printf("enter the infix expression :");
        scanf("%s",s);
        char *ptr=s;
        while(*ptr!='\0'){
            if(isalnum(*ptr)){
                printf("%c",*ptr);
            }
            else if(*ptr=='('){
                push(*ptr);
            }
            else if(*ptr==')'){
                while((x=pop())!='('){
                    printf("%c",x);
                }
            }
            else{
                while(priority(stack[top])>=priority(*ptr)){
                    printf("%c",pop());
                }
                    push(*ptr);

            }
                ptr++;

        }
        
            while(top!=-1){
                printf("%c",pop());
               // ptr++;
            }

}