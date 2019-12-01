
#include <stdio.h>
#include<stdlib.h>
typedef struct
    {  int n;
        int *next;
    } node;
     node *start;
    int menu();
    void add_item();
    void find_item();
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
void find_item()
{
    int pos;
int x;
node *prev=start, *cur=start;
    printf("Enter the number to search:");
    scanf("%d",&x);
while(cur!=NULL)
    {
    if(cur->n==x){
            prev->next=cur->next;
        printf("%d has been found:\n",x);
    return;
    }

    prev=cur;
    cur=cur->next;
}
printf("%d has not found in the list\n",x);
}

int menu()
{
    int choice;
    printf("\n\n press 1 for add item\n");
    printf(" press 2 for remove item\n");
    printf(" press 3 for quit\n");
    scanf("%d",&choice);
    return choice;
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
          case 3 : return 0;
       default : printf("wrong input");
}
}
    while (choice !=3);
    return 0;
}
int menu()
{
    int choice;
    printf("\n\n press 1 for add item\n");
    printf(" press 2 for remove item\n");
    printf(" press 3 for quit\n");
    scanf("%d",&choice);
    return choice;
}






