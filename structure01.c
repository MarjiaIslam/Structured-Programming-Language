#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 1000
int additems(int items[], int add[], int n);
int openDoor(char password[]);
void main()
{
    int items[N], add[N];
    int n=0;
    printf("Enter the number of items to be stored: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++){
    puts("Enter input into the items array: ");
    scanf("%d", &items[i]);

    puts("Enter input into the add array: ");
    scanf("%d", &add[i]);

   }
   additems(items,add,n);
   printf("The updated items array : ");
   for(int i=0; i<n; i++){
        printf("%d ", items[i]);
   }
   printf("\n");

   char pass[N];
   puts("Enter the password: ");
   scanf("%s", pass);
   openDoor(pass);
}
int additems(int items[], int add[], int n)
{
    for(int i=0; i<n; i++)
    {
        items[i]+=add[i];

    }
}
int openDoor(char password[])
{
    if (strcmp(password, "narnia")==0)
        puts("Door to narnia is open.\n");
    else puts("There is no door.\n");
}
