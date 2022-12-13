#include<stdio.h>
#include<stdlib.h>
struct node *create();

struct node 
{
    int data;
    struct node *left;
    struct node *right;
};

void main()
{
    struct node *root;
    root=NULL;
    root=create();

}

struct node *create()
{
    struct node *newnode;
    newnode=(struct node * )malloc(sizeof(struct node));
    int x;
    printf("Enter the data : ");
    scanf("%d",&x);
    if(x==-1){
        return NULL;
    }
    newnode->data=x;
    
    printf("Enter the left child of %d : ",x);
    newnode->left=create();
    printf("Enter the right child of %d : ",x);
    newnode->right=create();
    
    return newnode;
}
