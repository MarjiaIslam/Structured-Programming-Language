#include<stdio.h>
#include<stdlib.h>
int is_prime(int x)
{
    int count=0;
    for (int i=2; i<x; i++)
    {
        if(x%i==0) count++;
    }
    if (count==0) return 1;
    else return 0;
}

int digit_sum(int x)
{
   if(x==0) return 0;
    return ((x % 10) + digit_sum(x / 10));
}

int is_superprime(int x)
{
    int num = digit_sum(x);
    int con1 =  is_prime(x);
    int con2 = is_prime(num);
    if (con1==1 && con2==1) return 1;
    else return 0;
}

void main()
{
    int a,b;
    puts("Enter the numbers:\n");
    scanf("%d %d", &a, &b);
    for(int i=a; i<=b; i++)
    {
        int result = is_superprime(i);
        if(result==1)
        {
            printf("%d ",i);
        }
    }

}

