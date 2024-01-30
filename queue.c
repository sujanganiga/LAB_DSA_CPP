#include<stdio.h>
#include<conio.h>
#include<math.h>
#define size 5
int queue[size];
int f=-1,r=-1;
void enqueue(int x){
    if(r==-size-1){
        printf("queue is full");
    }
    else{
        if(f==-1){
            f=0;
        }
        r++;
        queue[r]=x;

    }
}
void dequeue(){
    if(f==-1||f>r){
        printf("queue is empty");
    }
    else{
        int v=queue[f];
        f++;
        if(f>r){
            f=r=-1;
        }
    }
}
void show(){
    if(f==-1){
        printf("queue is empty");
    }
    else{
        for(int i=f;i<=r;i++){
            printf("%d \t",queue[i]);
        }
    }
}

int main(){
    printf("enter option \n 1. enqueue \n 2. dequeue \n 3. peek \n 4. show \n 5. out ");
    int ch,x;
    scanf("%d",&ch);
    while(1){
        
    switch(ch){
        case 1:
            printf("enter the element yo insert");
            scanf("%d",&x);
            enqueue(x);
            break;
        case 2:
            dequeue();
            break;
        case 4:
            show();
            break;
        case 5:
            exit (0);
            break;
    }
    printf("enter option \n 1. enqueue \n 2. dequeue \n 3. peek \n 4. show \n 5. out ");
        scanf("%d",&ch);
    
    }



}

