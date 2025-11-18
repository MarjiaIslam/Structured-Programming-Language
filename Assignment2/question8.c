#include<stdio.h>
#include<stdlib.h>
void main (){
 int n;
 printf("Enter the size of the array:");
 scanf("%d", &n);

 int arr[n];
 printf("Enter the array elements:\n");
   for(int i=0; i<n; i++)
   {scanf("%d", &arr[i]);}

    for(int i=0; i<n; i++)
    {
        if(arr[i]%3==0)
        {
         arr[i]=-1;
        }

    } printf("if the elements of the array are divisible by 3:\n");
      for(int i=0; i<n; i++)
      printf("%d\t", arr[i]);

}
