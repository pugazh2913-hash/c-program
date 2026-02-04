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

int main() {
    struct node*root = create(20);
    root->left=create(10);
    root->right=create(30);
    root->left->right=create(15);
    root->left->left=create(9);
    root->right->left=create(28);
    root->left->right=create(40);
    
    printf("value at root->left->left = %d\n",root->left->left->data);

    return 0;
}
