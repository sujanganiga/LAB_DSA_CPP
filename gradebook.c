#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
        float data;
        char sub[20];
        struct node *next;
}*test1,*test2,*test3,*temp,*store,*set;

void insert(struct node **head,float mark,char sub[]){
    struct node *new;
    new=(struct node *)malloc(sizeof(struct node));
    strcpy(new->sub, sub);
    new->next=NULL;
    new->data=mark;
    if(!*head){
        *head=new;
    }
    else{
        temp=*head;
        while(temp->next){
            temp=temp->next;
        }
        temp->next=new;
        //new->data=mark;
    }
}
void assign(){
    store = NULL;
    insert(&store,0.0,"math");
    insert(&store,0.0,"dld");
    insert(&store,0.0,"coa");
}
void display(struct node *temp1,int way){
    int i=1;
    while(temp1){
        printf("avg marks for %s is ",temp1->sub);
        printf("-> %.2f \n",(temp1->data)*way);
        temp1=temp1->next;
    }
}
float smallest(float a, float b, float c){
        if(a<b&&a<c){
            return a;
        }
        else if(b<a&&b<c){
            return b;
        }
        else{
            return c;
        }
}
void  calavg(){
        while (test1 != NULL && test2 != NULL && test3 != NULL) {
        float a = test1->data;
        float b = test2->data;
        float c = test3->data;
        float avg;
        avg = ((a + b + c) - smallest(a, b, c)) / 2;
        temp = store;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->data=avg;
        test1 = test1->next;
        test2 = test2->next;
        test3 = test3->next;
        // display(store);
        }
}

int main()
{

    char YorN;
    float mark;
    float out;
    printf("S1?");
    scanf(" %c",&YorN);
    
    while(YorN=='y'||YorN=='Y'){
        assign();
        //display1(store);
        printf("\nenter the marks for test1 : \n");
        temp=store;
    while (temp != NULL) {
            printf("enter the marks for sub %s :", temp->sub);
            scanf("%f", &mark);
            printf(" out of :");
            scanf("%f", &out);
            mark = mark / out;
            
            insert(&test1, mark, temp->sub);
            temp = temp->next;
            
        }
        temp=store;
        printf("\nenter the marks for test2 : \n");
        for(int i=0;i<3;i++){
            printf("enter the  marks for sub %s :",temp->sub);
            scanf("%f",&mark);
            printf(" out of :");
            scanf("%f",&out);
            mark=mark/out;
            insert(&test2,mark,temp->sub);
            temp=temp->next;

        }
        temp=store;
        printf("\nenter the marks for test3 : \n");
        for(int i=0;i<3;i++){
            printf("enter the  marks for sub %s :",temp->sub);
            scanf("%f",&mark);
            printf(" out of :");
            scanf("%f",&out);
            mark=mark/out;
            insert(&test3,mark,temp->sub);
            temp=temp->next;
        }
        calavg();
        printf("format in which marks should be in :");
        int way;
        scanf("%d",&way);
        display(store,way);
        printf("\n do u want to conti");
        scanf(" %c",&YorN);
    }
        //     insert(&text1,10);
        //     insert(&text1,20);
        //     insert(&text1,30);
        // display(text1);


}