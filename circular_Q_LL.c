#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
}*f,*r;
void show(){
    if(f==NULL){
        printf("ll is empty ");
    }
    else{
        struct node * temp=f;
    }


}
void enqueue(int x){
    struct node * n;
    n=(struct node *)malloc(sizeof(struct node));
    n->data=x;
    n->link=NULL;
    if(f==NULL){
        f=n;
        r=n;
        f->link=NULL;
        r->link=NULL;
    }
    else{
        r->link=n;
        r=n;
        r->link=NULL;
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