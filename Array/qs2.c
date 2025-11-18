#include<stdio.h>
void main()
{
    int n, sum=0;
    printf("Enter the array size:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        sum+=arr[i];
        printf("\nThe sum of all the integers in the array: %d", sum);

    }




}
