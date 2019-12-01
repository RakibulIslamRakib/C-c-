#include <stdio.h>
#include<stdlib.h>
typedef struct
    {  int n;
        int *next;
    } node;
     node *start;
    int menu();
    void add_item();
    void display_sum();
    void add_item()
{
    int max=0;
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
void display_sum()
{
    int sum=0;
    while(temp ->next!=NULL){
        temp=temp->next;
        sum=sum+cur->n;
    }
printf("%d",sum);
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
            case 2 :display_sum();
            break;
         case 3 : return 0;
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
    printf(" press 2 for display the sum\n");
    printf(" press 3 for quit\n");
    scanf("%d",&choice);
    return choice;
}

