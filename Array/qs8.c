#include<stdio.h>
void main()
{
    int i=0, n,num;
    printf("Enter the array size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements:\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number you want to search:");
    scanf("%d", &num);
    printf("The number is at position: ");
    for(int i=0; i<n; i++)
    {
        if(arr[i]==num)
        {
            printf("%d\t", i);
        }
        else {
            puts("Not found.");break;
        }
    }



}
