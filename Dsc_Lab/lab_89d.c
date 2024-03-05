#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * right;
    struct node * left;
}*root;
struct node * insert(int n,struct node * root1){
         struct node * new_node=(struct node *)malloc(sizeof(struct node));
            new_node->data=n;
            new_node->left=NULL;
            new_node->right=NULL;
        if(!root1){
            root1=new_node;
            root1->left=NULL;
            root1->right=NULL;
            return new_node;
        }
        else{
            if(n<root1->data){
                root1->left=insert(n,root1->left);
        
            }
            else{
                root1->right=insert(n,root1->right);
            }
        }
        return root1;
 }
 void inorder(struct node *root2){
    //printf("not");
    if(root2){
        inorder(root2->left);
        printf("  %d -> ",root2->data);
        inorder(root2->right);
    }

 }
 void preorder(struct node *root2){
    if(root2){
        printf("  %d -> ",root2->data);
        preorder(root2->left);
        preorder(root2->right);
    }
 }
void postorder(struct node *root2){
    if(root2){
        postorder(root2->left);
        postorder(root2->right);
        printf("  %d -> ",root2->data);
    }
 }
 struct node * mini(struct node * node1){
    struct node * cur= node1;
    while(cur&&cur->left){
        cur=cur->left;
    }
    return cur;
 }
struct node * delete(int val,struct node * root){
    if(!root){
        printf("no element found");
        return ;
    }
    else if(val<root->data){
        root->left=delete(val,root->left);
    }
    else if(val>root->data){
        root->right=delete(val,root->right);
    }
    else{
        if(root->left==NULL&&root->right==NULL){
            free(root);
            return NULL;
        }
        else if(root->left==NULL){
            struct node *temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL){
            struct node *temp=root->right;
            free(root);
            return temp;
        }
        struct node * temp=mini(root->right);
        root->data=temp->data;
        root->right=delete(temp->data, root->right);

    }
    return root;


}

int main(){
    char ch;
    printf("\n1.insert \n2.delete \n3.inorder \n4.preorder \n5.postorder \n6.exit \n ---> ");
    scanf("%d",&ch);
    while(1){
        switch(ch){
            case 1:
                printf("\n\nenter the data to be inserted -> ");
                int n;
                scanf("%d",&n);
                root=insert(n,root);
                break;
            case 2:
                printf("\n\nenter the data to be deleted -> ");
                scanf("%d",&n);
                root=delete(n,root);
            case 3:
                printf("\n INORDER TERAVERSAL :\n");
                inorder(root);
                break;
            case 4:
                printf("\n PREORDER TERAVERSAL :\n");
                preorder(root);
                break;
            case 5:
                printf("\n POSTORDER TERAVERSAL :\n");
                postorder(root);
                break;
            case 6:
                exit(0);


        }
          printf("\n1.insert \n2.delete \n3.inorder \n4.preorder \n5.postorder \n");
         scanf("%d",&ch);
    }

}