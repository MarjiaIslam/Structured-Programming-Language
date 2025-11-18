#include<stdio.h>
#include<stdlib.h>

 void main(){
 int n;
 printf("Enter the size of the array:");
 scanf("%d", &n);

 int arr[n]; int arr2[n+1];
 printf("Enter the array elements:\n");
   for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

 int num, pos;
 printf("Enter the number you want to insert:\n");
 scanf("%d", &num);
 printf("Enter the position you want to insert the number into:\n");
 scanf("%d", &pos);

    for(int i=0; i<pos; i++){
        arr2[i] = arr[i];
    }

    arr2[pos] = num;

    for(int i=pos+1; i<n+1; i++){
        arr2[i] = arr[i-1];
    }
    printf("\nAfter inserting the new number in the array, it will look like this:\n");
    for(int i=0; i<n+1; i++){
        printf("%d\t", arr2[i]);
    }
 }
