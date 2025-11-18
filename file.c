#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fptr = fopen("firstfile.txt", "w+");

    if (fptr==NULL)
       printf("Error!");
    else
        printf("File has opened.\n");

        char name[30];
        int age;
        puts("Enter your name: ");
        fgets(name, 30, stdin);
        puts("Enter your age:");
        scanf("%d", &age);

        fprintf(fptr, "Name: %s Age: %d\n", name, age);

    fclose(fptr);

}
