#include <stdio.h>
#include<stdlib.h>
typedef struct
    {  int n;
        int *next;
    } node;
     node *start;
    int menu();
    void add_item();
    void found_item();
    void display_list();
    void add_item()
{
    node *temp;
    node *cur = (node*) malloc(sizeof(node));
    printf("Enter a number");
    scanf("%d",&cur->n);
    cur -> next = NULL;
    if(start == NULL)
        start=cur;
    else{
        temp = start;
    while(temp ->next!=NULL){
        temp=temp->next;
    }
    temp->next=cur;
    }
}
void found_item()
{
int x;
node *prev=start, *cur=start;
    printf("Enter the number to search:");
    scanf("%d",&x);
while(cur!=NULL)
    {
    if(cur->n==x){
            prev->next=cur->next;
        printf("%d has been found from list :\n",x);
    return;
    }

    prev=cur;
    cur=cur->next;
}
printf("%d has not found in the list\n",x);
}
void display_list()
{
node *temp = start;
while(temp!=NULL){
    printf("%d-->",temp->n);
    temp=temp->next;
}
}
int main()
{
    int choice;
    start = NULL;
    do
    {
        choice = menu();
        switch(choice)
        {
            case 1 :add_item();
            break;
            case 2 : found_item();
            break;
            case 3 :display_list();
            break;
         case 4 : return 0;
       default : printf("wrong input");
}
}
    while (choice !=4);
    return 0;
}
int menu()
{
    int choice;
    printf("\n\n press 1 for add item\n");
    printf(" press 2 for found item\n");
    printf(" press 3 for display item\n");
    printf(" press 4 for quit\n");
    scanf("%d",&choice);
    return choice;
}







