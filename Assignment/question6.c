#include<stdio.h>
#include<stdlib.h>
 void main(){
 int n, max, min, index_max, index_min;
 printf("Enter the size of the array:");
 scanf("%d", &n);
 int arr[n];

 printf("Enter %d integers into the array:\n", n);
 for(int i=0; i<n; i++)
 {scanf("%d", &arr[i]);}

    max = arr[0];
    index_max = 0;
    min = arr[0];
    index_min = 0;

   for(int i=0; i<n; i++){
    if(arr[i]>max)
    {
        max = arr[i];
        index_max = i;
    }
   if(arr[i]<min)
    {
        min = arr[i];
        index_min = i;
    }

   }

    printf("The maximum number is %d & its index position is %d\n", max, index_max);
    printf("The minimum number is %d & its index position is %d\n", min, index_min);


}
