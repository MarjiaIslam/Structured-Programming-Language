#include<stdio.h>
void main()
{
    int n;
    printf("Enter the array size: ");
    scanf("%d",&n);
    int arr1[n], arr2[n];
    printf("Enter the array elements:\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Array1: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr1[i]);
    }
    puts("\n\n");

    for(int i=n-1,j=0; i>=0,j<n; i--,j++)
    {
        arr2[j]=arr1[i];
    }
    printf("Array2: ");
    for(int j=0; j<n; j++)
    {
        printf("%d ", arr2[j]);
    }

    puts("\n\n");



}
