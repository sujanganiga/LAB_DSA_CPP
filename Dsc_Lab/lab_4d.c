#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next; 
}*top;

void push(int n){
    struct node* new_node= (struct node *)malloc(sizeof(struct node));
    new_node->data=n;
    new_node->next=NULL;
    if(!top){
        top=(struct node *)malloc(sizeof(struct node));
        top=new_node;
    }
    else{
        new_node->next=top;
        top=new_node;
    }

}
int pop(){
    if(!top){
        printf("under flow");
    }
    else{
        int val=top->data;
        struct node * temp= top;
        top=top->next;
        free(temp);
        return val;
    }
}
void display(){
        struct node * temp=(struct node *) malloc(sizeof(struct node));
        temp=top;
        printf("\nTHE STACK IS : \n");
        while(temp){
            printf("  | %d |  \n",temp->data);
            temp=temp->next;
        }
}


int main(){
    char ch;
    printf("\n1.push \n2.pop() \n3.peek() \n4.display() \n5.exit \n --->");
    scanf("%d",&ch);
    while(1){
    switch(ch){
        case 1:
            printf("\n enter the data for insert in stack -->");
            int n;
            scanf("%d",&n);
            push(n);
            break;
        case 2:
           printf("\n %d is deleted from stack \n",pop());
            break;
        case 3:
           // peek();
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
