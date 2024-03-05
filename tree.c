#include<stdio.h>
#include<stdlib.h>

struct node {
    int val;
    struct node * right;
    struct node * left;
    
}*root;

struct node * insert(struct node* root,int val1){
    struct node * new_node=(struct node*)malloc(sizeof(struct node));
    new_node->left=NULL;
    new_node->right=NULL;
    new_node->val=val1;
    if(!root){
        root=new_node;
        root->left=NULL;
        root->right=NULL;
        return new_node;
    }
    if(val1<root->val){
        root->left=insert(root->left, val1);
    }
    else{
        root->right=insert(root->right, val1);
    }

}
void inorder(struct node * root){
    //printf("worked");
    if(root){
        inorder(root->left);
        printf("%d",root->val);
        inorder(root->right);
    }
}
void postorder(struct node * root){
    //printf("worked");
    if(root){
        postorder(root->left);
        postorder(root->right);
        printf("%d",root->val);

    }
}
void preorder(struct node * root){
    //printf("worked");
    if(root){
        printf("%d",root->val);
        preorder(root->left);
        preorder(root->right);
    }
}
int main(){
    //root=(struct node*)malloc(sizeof(struct node));
     //root->val=1;
    //root->left=NULL;
    //root->right=NULL;
    root=insert(root,6);
    root=insert(root,3);
    root=insert(root,2);
    root=insert(root,4);
    root=insert(root,9);
    root=insert(root,10);
    // insert(root,90);
    // insert(root,80);
    // insert(root,200);
    // insert(root,150);
    // insert(root,180);
    // insert(root,300);
    //insert(root,49);
    //
    //insert(root,31);
    printf("inorder\n");
    inorder(root);
    printf("\npostorder\n");
    postorder(root);
    printf("\npreorder\n");
    preorder(root);
}