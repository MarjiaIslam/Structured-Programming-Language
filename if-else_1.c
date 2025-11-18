#include<stdio.h>
void main (){
/*
//display/print "Hello World"
printf("Hello World\n");

int x;   ///declaration
printf("Enter an integer: \n");
scanf("%d", &x);
printf("The number is: %d\n" ,x);

float m=3.5;  ///initialization
char n=102;
printf("m=%f \n n=%c",m ,n);  ///if we use (%d) as formate specifier it will give ascii values as output

                             ///& for (%c) it will be the given input, but it must be written as a character.


*/
///if-else
//checking is the number even or odd

int n;
printf("Enter the number you want to check: \n");
scanf("%d", &n);
    if (n%2==0)
{
    printf("The number is even.");
}
    else
        {
        printf("\nThe number is odd.\n\n");
       }

  int age;
  printf("Enter your age : ");
  scanf("%d", &age);
  if (age>=18)
  {
      printf("you're eligible for voting.");
  }
  else
  {
      printf("You're not eligible for voting.\n");
  }

///if-else-if
    int a,b;
    printf("\n\nEnter the numbers: ");
    scanf("%d%d", &a,&b);
    if (a == b)
    {
        printf("\nThe numbers are equal.");
    }
    else if(a>b)
    {
        printf("a is greater than b.");
    }
    else if (a<b)
    {
        printf("a is not greater than b.");
    }
    else
    {
        printf("There is no relation between a & b.");
    }



















    }
