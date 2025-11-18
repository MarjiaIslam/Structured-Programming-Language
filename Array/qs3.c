#include<stdio.h>
void main()
{
    int n,even_sum=0;
    printf("Enter the array size:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i]%2==0){
            even_sum+=arr[i];
        }
    }
    printf("\nThe sum of the even integers of the array:%d", even_sum);
    puts(" ");



}
