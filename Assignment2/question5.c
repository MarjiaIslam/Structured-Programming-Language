#include<stdio.h>
#include<stdlib.h>
void main(){
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int arr1[n], arr2[n], sum_arr[n];

    printf("Enter %d integer numbers in the array1:\n",n);
    for (int i=0; i<n; i++)
    {scanf("%d",&arr1[i]);}

    printf("Enter %d integer numbers in the array2:\n",n);
    for (int i=0; i<n; i++)
    {scanf("%d",&arr2[i]);}

    for (int i=0; i<n; i++)
    {sum_arr[i]=arr1[i]+arr2[i];}

    printf("The sum of the same index numbers of the two arrays:\n");

    for (int i=0; i<n; i++)
    {
        printf("%d\n",sum_arr[i]);
    }





}
