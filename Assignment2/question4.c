#include<stdio.h>
#include<stdlib.h>
void main(){
    int n, fact = 1;
    printf("Enter the number:");
    scanf("%d", &n);

    while(n!=1)
    {
        fact=fact*n;
        n--;
    }
        printf("the factorial is %d.\n", fact);




}
