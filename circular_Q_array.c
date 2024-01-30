#include<stdio.h>
#include<conio.h>
#include<math.h>
#define size 5
int queue[size];
int f=-1,r=-1;
void enqueue(int x){
    if((r==size-1&&f==0)||f==r+1){
        printf("queue is full");
    }
    else{
        if(f==-1){
            f=0;
        }
        r=(r+1)%size;
        queue[r]=x;

    }
}
void dequeue(){
    if(f==-1||f>r){
        printf("queue is empty\n");

    }
    else{
        int v=queue[f];
        f++;
        if(f>r){
            f=r=-1;
        }
        printf("\ndeleted element is \t %d",v);
        printf("\n REMAINING ARRAY IS :: \n");
        show();
    }
}
void show(){
    if(f==-1){
        printf("queue is empty");
    }
    else{
        int i;
        for(i=f;i!=r;i=(i+1)%size){
            printf("%d \t",queue[i]);
        }
        printf("%d \t",queue[i]);

    }
}
void peek(){
    if(f==-1){
        printf("queue is empty\n");
    }
    else{
        printf("\n OUT PUT IS : \n");
        printf("%d",queue[f]);
    }
}

int main(){
        printf("\n 1. enqueue \n 2. dequeue \n 3. peek \n 4. show \n 5. out\n enter option : \t");
    int ch,x;
    scanf("%d",&ch);
    while(1){
        
    switch(ch){
        case 1:
            printf("enter the element to insert");
            scanf("%d",&x);
            enqueue(x);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            peek();
            break;
        case 4:
            show();
            break;
        case 5:
            exit (0);
            break;
    }
    printf("\n 1. enqueue \n 2. dequeue \n 3. peek \n 4. show \n 5. out\n enter option : \t");

        scanf("%d",&ch);
    
    }



}

