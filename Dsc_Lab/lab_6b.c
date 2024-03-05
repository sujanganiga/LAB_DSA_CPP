#include<stdio.h>
#include<stdlib.h>

#define Size 5
int queue[Size];
int front=-1;
int rear =-1;

void enqueue(int n){
    if((front == rear + 1) || (front == 0 && rear == 5 - 1)){
        printf("overflow");
    }
    else{
        if(front==-1){
            front=0;
        }
        rear=(rear+1)%5;
        queue[rear]=n;
    }

}

void dequeue(){
    if(front==-1){
        printf("under flow");
    }
    else{
        if(front==rear){
            front=-1;
            rear=-1;
        }
        else{
        front=(front+1)%5;
        }
    }
}

void display(){
    int i;
    for(i= front ; i!=rear ; i=(i+1)%5){
        printf(" %d |",queue[i]);
    }
    printf(" %d |",queue[i]);

}

int main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    dequeue();
    enqueue(3);

    display();

}