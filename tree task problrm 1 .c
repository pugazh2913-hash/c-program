#include <stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
    char name[20];
    struct node *left;
    struct node * right;
};
struct node* create(char name[]){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    strcpy( newnode->name,name);
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}

int main() {
    struct node*root = create("john");
    root->left=create("rahul");
    root->right=create("ammu");
    root->left->right=create("david");
    root->left->left=create("alex");
  
    
    printf("Grandparent = %s\n",root->name);
    printf("first child = %s\n",root->left->right->name);
    printf("Second child = %s\n",root->left->left->name);

    return 0;
}
