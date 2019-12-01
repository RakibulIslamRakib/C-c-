#include <stdio.h>

#include <math.h>

#include <stdlib.h>

unsigned long long int randm(int n);

unsigned long long int von(unsigned long long int x, int n);



int main(void)

{

  unsigned long long int x, s;

  int n, i, r;



  printf("Enter the number of digits in the seed value ");

  scanf("%d", &n);
    printf("\nEnter the total number of random numbers to be generated ");

  scanf("%d", &r);



  if (n >= 12){

    printf("TOO LARGE!!");

    exit(0);

  }



  x = randm(n);

  for(i = 0; i < r; i++){

     s = von(x, n);

     x = s;

  printf("\nRandom Number generated: %lld\n", s);

  }

  return 0;

}

