#include<stdio.h>
#include<stdlib.h>
int digit_sum(int x)
{

   if(x==0) return 0;
    return ((x % 10) + digit_sum(x / 10));
}

void main()
{
    printf("%d", digit_sum(123));
}
