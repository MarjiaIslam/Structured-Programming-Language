#include<stdio.h>
void main()
{
    int n, max, min, index_max, index_min;
    printf("Enter the array size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements:\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    max=arr[0];
    index_max=0;
    min=arr[0];
    index_min=0;


    for(int i=0; i<n; i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
            index_max=i;
        }
        if(min>arr[i])
        {
            min = arr[i];
            index_min=i;
        }
    }

    printf("The maximum number is %d & its index number is %d\n", max,index_max);
    printf("The minimum number is %d & its index number is %d\n", min,index_min);





}
