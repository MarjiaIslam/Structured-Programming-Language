#include<stdio.h>
void main()
{
    int m,n, temp;
    printf("Enter the size of the arrays: ");
    scanf("%d%d",&m,&n);
    int arrA[m], arrB[n];
    printf("Enter the elements in the first array:\n");
    for(int i=0; i<m; i++)
    {
        scanf("%d",&arrA[i]);
    }
    printf("Enter the elements in the second array:\n");
    for(int j=0; j<n; j++)
    {
        scanf("%d",&arrB[j]);
    }
    for(int i=0, j=0; i<n || j<m; i++,j++)
    {
        temp=arrA[i];
        arrA[i]=arrB[j];
        arrB[j]=temp;
    }
    printf("The arrays after swapping the elements:\n");
    puts("arrA:");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arrA[i]);
    }
    puts("\n");
    puts("arrB:");
    for(int j=0; j<m; j++)
    {
        printf("%d ", arrB[j]);
    }

}
