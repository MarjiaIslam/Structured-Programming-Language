#include<stdio.h>
#define N 5000
void main()
{
    int n,temp, arr[N], rev[N];
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("The original array:\n ");
    for(int i=0; i<n; i++)
    {
        printf("%d\t", arr[i]);
    }

    puts("  ");

//reversing the array elements
    for(int i=n-1,j=0; i>=0,j<n; i--,j++)
    {
        rev[j]=arr[i];

    }
    printf("The reverse array:\n ");
    for(int j=0; j<n; j++)
    {
        printf("%d\t", rev[j]);
    }

    puts("  ");

//without using another array

    for(int i=0, j=n-1; i<j; i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
   printf("The reverse array:\n ");
    for(int i=0; i<n; i++)
    {
        printf("%d\t", arr[i]);
    }











}
