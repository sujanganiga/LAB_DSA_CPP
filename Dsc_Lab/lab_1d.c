#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*head;


void insert(){
    struct node* new_node=(struct node *)malloc(sizeof(struct node));
    int value;
    printf("enter the data which want to insert :  ");
    scanf("%d",&value);
    new_node->data=value;
    new_node->next=NULL;
    if(!head){
        head=(struct node *)malloc(sizeof(struct node));
        head->next=NULL;
        head=new_node;
    }
    else{
        struct node *temp =head;
        while(temp->next){
            temp=temp->next;
        } 
        temp->next=new_node;
        temp=temp->next;
    }
}

void display(){
    struct node* temp;
    temp= head;
    while(temp){
        printf(" %d -> ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int main(){

    char ch;
    printf("enter :\n1. for insert \n2.display() \n3.exit  :--->");
    scanf("%d",&ch);
    while(1){
        switch(ch){
                case 1:
                        insert();
                        break;
                case 2:
                        display();
                        break;
                case 3: 
                        exit(0);
        } 
        printf("enter :\n1. for insert \n2.display() \n3.exit   : --->");
        scanf("%d",&ch);   

    }


}