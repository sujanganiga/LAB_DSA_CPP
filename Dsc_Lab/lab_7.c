#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* prev;
    struct node* next;
}*head;

void insert(int n){
    struct node *new_node=(struct node *)malloc(sizeof(struct node));
    new_node->data=n;
    new_node->next=NULL;
    new_node->prev=NULL;
    if(!head){
        head=(struct node *)malloc(sizeof(struct node));
        head=new_node;
    }
    else{
        struct node * temp= head;
        while(temp->next){
            temp=temp->next;
        }
        temp->next=new_node;
        new_node->prev=temp;
    }
}
void display(){
    struct node * temp= head;
    while(temp->next){
        printf("  %d  <--> ",temp->data);
        temp=temp->next;
    }
    printf("  %d  ",temp->data);

    //temp=temp->prev;
    // printf("reverse ::");
    // while(temp){
    //     printf("  %d  <--> ",temp->data);
    //     temp=temp->prev;
    // }

}
// void delete_mid(){
//         struct node * fast=head;
//         struct node * slow=head;
//         struct node * bslow=head;
//         while(fast&&fast->next){
//             fast=fast->next->next;
//             bslow=slow;
//             slow=slow->next;

//         }
//         bslow->prev->next=bslow->next;
//         free(bslow);}
void delete_mid(){
    struct node *fast=head;
    struct node *slow=head;
    struct node *bslow=head;
    int count=0;
    while(fast&&fast->next){
        fast=fast->next->next;
        bslow=slow;
        slow=slow->next;
        if(fast==NULL){
            count=1;
        }
    }
    printf("\n count =%d", count);
   if(count==0){
    slow->prev->next=slow->next;
    free(slow);
    }
    else{
       bslow->prev->next=bslow->next;
    free(bslow); 
    }
}
void insert_b(int n, int val){
    struct node * temp=head;
    if(head->data==n){
        struct node* new_node=(struct node*)malloc(sizeof(struct node));
        new_node->data=val;
        new_node->prev=NULL;
        new_node->next=head;
        head->prev=new_node;
        head=new_node;


    }
    else{
    while(temp){
        if(temp->data==n){
            struct node* new_node=(struct node*)malloc(sizeof(struct node));
            new_node->data=val;
            new_node->next=temp;
            new_node->prev=temp->prev;
            temp->prev->next=new_node;
            temp->prev=new_node;
            break;
        }
        temp=temp->next;
    }}
}

int main(){
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    insert(6);
    insert(7);
    insert_b(3,8);
    //delete_mid();
    display();

}