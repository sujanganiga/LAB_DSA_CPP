#include<stdio.h>
#include<stdlib.h>
#define Max 10
int stack[Max];
int top=-1;

void push(int n){
    if(top==Max-1){
        printf("overflow error");
    }
    else{
        top++;
        stack[top]=n;
    }
}

int pop(){
    if(top==-1){
        printf("under flow");
    }
    else{
        int temp=stack[top];
        top--;
        return temp;
    }
}

void display(){
    for(int i=top; i>=0 ;i--){
        printf(" | %d | \n",stack[i]);
    }
}

void peek(){
    if(top==-1){
        printf("under flow");
   }
   else{
        printf("top element is --> %d \n " ,stack[top]);
   }

}

int main(){
    char ch;
    printf("\n1.push \n2.pop() \n3.peek() \n4.display() \n5.exit \n --->");
    scanf("%d",&ch);
    while(1){
    switch(ch){
        case 1:
            printf("enter the data for insert in stack -->");
            int n;
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            printf("%d is deleted from stack \n",pop());
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0); 
        
    
     }
    printf("\n1.push \n2.pop() \n3.peek() \n4.display() \n5.exit \n --->");
    scanf("%d",&ch);
    }
    return 0;
}