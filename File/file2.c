#include<stdio.h>
void main()
{
    FILE *fptr = fopen("sample.txt", "r");

    if (fptr==NULL)
        printf("Error!");
    else
        printf("File has opened.\n");
    int num, sum=0, count=0, avg;
    while(!feof(fptr))
    {
        fscanf(fptr, "%d\n", &num);
        sum+=num;
        count++;
    }
    avg = sum/count;
    fclose(fptr);
}
