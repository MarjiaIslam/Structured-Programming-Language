#include<stdio.h>
void main()
{

    int i,n, sum=0;
    printf("Enter the array size:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        if(i%2==0){
            sum+=arr[i];
        }
    }
        printf("\nThe even indexed sum:%d", sum);





}
