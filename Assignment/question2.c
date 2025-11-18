#include<stdio.h>
#include<stdlib.h>
void main(){
  int x, n, num;
  printf("To player 1: choose the number x=");
  scanf("%d", &x);

  printf("\nEnter how many times player 2 can guess the number:");
  scanf("%d", &n);
  printf("\nPlayer 2 can guess the number %d times.\n", n);

  while(n>=1)
  {
    printf("\nTwo player 2: guess the number=");
    scanf("%d", &num);
    n--;
    if(num!=x)
    {
     printf("wrong, %d choices left.\n", n);
     if(n==0)
    {
      printf("Game over! player 1 wins!\n"); break;
    }

    }
    else if(num==x)
    {
     printf("Right,player2 wins!\n"); break;
    }

  }

}
