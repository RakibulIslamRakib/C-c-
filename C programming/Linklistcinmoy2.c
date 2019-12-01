#include<stdio.h>
#include<stdlib.h>
typedef struct{
int data;
int *next;
}node;
node *start;
int menu();
void add_item();
void remove_item();
void display();
  void add_item()
{
    node *temp;
    node *cur = (node*) malloc(sizeof(node));
    printf("Enter a number");
     scanf("%d",&cur->data);
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
void  remove_item(){
       int x;
    node *prev=start,*cur=start;
    printf("\nEnter the number to delect: ");
    scanf("%d",&x);
    if(start ->data==x){
        start=start ->next;
        return;
    }
    while(cur!=NULL){
        if(cur->data==x){
            prev->next=cur->next;
            printf("\nThe node has been deleted.");
            return;
        }
        prev=cur;
        cur=cur->next;
    }
    printf("\nThe node has not found.");
}
void display(){
    node *temp=start;

while(temp!=NULL){
    printf("%d -->",temp->data);
    temp=temp->next;
}

}
int menu(){
int choice;
printf("\n\nPress 1 for Add item: ");
printf("\nPress 2 for remove item: ");
printf("\nPress 3 for display item: ");
printf("\nPress 4 for exit: ");
scanf("%d",&choice);
return choice;
}

int main(){
int choice;
start =NULL;
do{
 choice=menu();
switch(choice)
{
    case 1:add_item();
    break;
     case 2:remove_item();
    break;
     case 3:display();
    break;
    case 4:return;
    default: printf("\n wrong input");
}
}while(choice!=4);
return 0;
}

