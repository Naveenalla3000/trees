#include<stdio.h>
#include<stdlib.h>

struct node *create();
void preorder();
void inorder();
void postorder();

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
    
    
    printf("pre-order : ");
    preorder(root);
    printf("\n");
    printf("Inorder : ");
    inorder(root);
    printf("\n");
    printf("post-order : ");
    postorder(root);

}

struct node *create()
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
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

void preorder(struct node *root)
{
    
    if(root==NULL){
        return; 
    }
    printf("%d  ",root->data);
    preorder(root->left);
    preorder(root->right);
}

void inorder(struct node *root)
{
    if(root==NULL){
        return; 
    }
    inorder(root->left);
    printf("%d  ",root->data);
    inorder(root->right);
}

void postorder(struct node *root)
{
    if(root==NULL){
        return; 
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d  ",root->data);
}
