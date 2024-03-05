#include<stdio.h>
#include<stdlib.h>
int front=-1;
int rear=-1;
#define Max 20
int queue[Max];

void enqueue(int n){
    if(rear==Max-1){
        printf("over flow");
    }
    else{
        if(front==-1){
            front=0;
        }
        rear=rear+1;
        queue[rear]=n;
    }
}

void dequeue(){
    if(front==-1||front>rear){
        printf("underflow");
    }
    else{
        front++;
        if(front>rear){
            front=rear=-1;
        }
    }
}
void display(){
    int size=sizeof(queue)/sizeof(queue[0]);
    for(int i=front; i<=rear ;i++){
        printf("|  %d  ",queue[i]);
    }
}

int main(){
    enqueue(1);
    enqueue(2);
    dequeue();
    enqueue(3);
    display();

}