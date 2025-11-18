#include<stdio.h>
void main()
{
    int n, count=0;
    printf("Enter the array size: ");
    scanf("%d",&n);
    char arr[n];
    printf("Enter the array elements:\n");
    for(int i=0; i<n; i++)
    {
        scanf(" %c", &arr[i]);
        switch(arr[i]){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
                count++;
                break;
        }
    }
        printf("There are %d vowel.\n", count);


}
