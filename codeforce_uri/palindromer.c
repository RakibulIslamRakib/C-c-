#include<stdio.h>
#include<string.h>
int main()
{
    char name1[30];
    char name2[30];
    strcmp(name1,name2);
    printf("Enter a palindrom word");
    gets(name1);
    printf("Enter a any word");
    gets(name2);
    if(strcmp(name1,name2)==0)
        printf("%s is a palindrom");
    else
        printf("%s is not a palindrom");

    return 0;

}
