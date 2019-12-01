#include<stdio.h>
#include<stdlib.h>

typedef struct BST
{
    int data;
    struct BST *left;
    struct BST *right;
}node;

node *create();
void insert(node *,node *);
void preorder(node *);

int main()
{
    char ch;
    node *root=NULL
