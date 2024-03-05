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

void insert_sort(){
    struct node* new_node=(struct node *)malloc(sizeof(struct node));
    int value;
    printf("enter the data for the inserting in sorted LL --> ");
    scanf("%d",&value);
    new_node->data=value;
    new_node->next=NULL;
    if(!head){
        head=(struct node *)malloc(sizeof(struct node));
        head->next=NULL;    
        head=new_node;
    }
    else if(!head->next||head->data>value){

        new_node->next=head;
        head=new_node;
    }
    else{
        struct node *temp=head;
        while(temp->next&&temp->next->data<value){
            temp=temp->next;
        }
        new_node->next=temp->next;
        temp->next=new_node;
    }

}
void reverse(){
    struct node *prev, *cur ,*next1;
    cur=next1=head;
    prev=NULL;
    while(next1){
        next1=next1->next;
        cur->next=prev;
        prev=cur;
        cur=next1;
    }
    head=prev;

}
// void pos_neg(){
//     struct node *pos;
//     struct node *neg;
//     struct node* temp=head;
//     while (temp->next)
//     {
//         struct node * new_node= (struct node *)malloc(sizeof(struct node *));
//         new_node->data=temp->data;
//         new_node->next=NULL;
//         if(temp->data>0){
//             if(pos=NULL){
//                 pos=(struct node *)malloc(sizeof(struct node));
//                 pos=new_node;
//             }
//             else{
//                 struct node * temp1=pos;
//                 while(temp1->next){
//                     temp1=temp->next;
//                 }
//                 temp1->next=new_node;
//             }
//         }
//         else{
//             if(neg=NULL){
//                 neg=(struct node *)malloc(sizeof(struct node));
//                 neg=new_node;
//             }
//             else{
//                 struct node * temp1=neg;
//                 while(temp1->next){
//                     temp1=temp->next;
//                 }
//                 temp1->next=new_node;
//             }
//         }
//     }
//     printf("positive numbers ---->\n");
//     display 


// }

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
                case 4:
                        insert_sort();
                        break;
                case 5:
                        reverse();
                        break;
        } 
        printf("enter :\n1. for insert \n2.display() \n3.exit   : --->");
        scanf("%d",&ch);   

    }


}