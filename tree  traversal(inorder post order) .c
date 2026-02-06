#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node * right;
};
struct node* create(int value){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
void inorder(struct node* root){
    if(root == NULL)
    return;
    
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}
 void postorder(struct node* root){
    if(root == NULL)
    return;
    
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->data);
}
int main() {
    struct node*root = create(20);
    root->left=create(10);
    root->right=create(30);
    root->left->right=create(15);
    root->left->left=create(9);
    root->right->left=create(28);
    root->left->right=create(40);
    
   printf("inorder traversal:%d ");
   inorder(root);
    printf("\npostorder traversal:%d ");
   postorder(root);
    return 0;
}