#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
}*head;
void insert_at_beg(int data1){
        struct node * new_node;
        new_node=(struct node*)malloc(sizeof(struct node));
        new_node->prev=NULL;
        new_node->data=data1;
        new_node->next=head;
        head->prev=new_node;
        head=new_node;

}
void insert(int data1){
        struct node * new_node;
        struct node * temp;
        temp=head;
        new_node=(struct node*)malloc(sizeof(struct node));
        new_node->data=data1;
        new_node->next=NULL;
        if(!(head->next)){
              head->next=new_node;
              new_node->prev=head;
        }
        else{
        while(temp->next){
                temp=temp->next;
        }
        temp->next=new_node;
        new_node->prev=temp;
        temp=temp->next;
        }
        }
void delete(){
        struct node *temp=head;
        while(temp->next){
            temp=temp->next;
        }
        temp->prev->next=NULL;
        free(temp);
}
void display(){
        struct node * temp1=head;
        while(temp1){
            printf("%d\n",temp1->data);
            temp1=temp1->next;
        }

}
void delete_mid(){
        struct node * fast=head;
        struct node * slow=head;
        //struct node * bslow=head;
        while(fast&&fast->next){
            fast=fast->next->next;
            //bslow=slow;
            slow=slow->next;

        }
        slow->prev->prev->next=slow->prev->next;
        free(slow);
    
}
void insert_before(int val,int val1){
        struct node * new_node;
        new_node=(struct node*)malloc(sizeof(struct node));
        new_node->data=val1;
        new_node->next=NULL;
        struct node * temp=head;
        while(temp&&temp->data!=val){
            temp=temp->next;
        }
         if (head->data == val) {
        new_node->next = head;
        new_node->prev = NULL;
        head->prev = new_node;
        head = new_node;
    } else {
        new_node->next = temp->prev->next;
        new_node->prev = temp->prev;
        temp->prev->next = new_node;
        temp->prev = new_node;
    }
}
int main()
{
    int a;
    printf("enter first node data");
    scanf("%d",&a);
    head=(struct node*)malloc(sizeof(struct node));
    head->prev=NULL;
    head->next=NULL;
    head->data=a;

    //insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    //insert_before(1,5);
    delete_mid();
    display();


}