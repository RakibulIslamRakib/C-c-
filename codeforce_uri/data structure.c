#include <stdio.h>
#include <string.h>
struct student{
int id;
float cgpa;
char mobile[50];
};

int main()
{
    struct student forhad;
    forhad.id = 1602067;
    forhad.cgpa = 3.50;
    strcpy(forhad.mobile,"01834541378");


    printf(forhad);
    return 0;


}

printf(struct student st){
    printf("ID = %d\n",forhad.id);
    printf("CGPA = %f\n",forhad.cgpa);
    printf("MOBILE = %d\n",forhad.mobile);
}
