#include<stdio.h>
void main()
{
    /*
    ///get an integer within the range of 1 & 100 including.

    int n;
    do{
    printf("Enter a number between 1 & 100\n");
    scanf("%d", &n);
     }
      while(n<1 || n>100); */

    /* problem: simple calculator.
     1) display menu
     2) take choice from user
     3) handle the user choice / find the result
     4) display the result */

    while(1)
    {
        float v1, v2, result, flag=1;
        printf("Enter the two numbers:");
        scanf("%f%f",&v1,&v2);
//display menu
        puts("...The menu...");
        puts("Enter + to add");
        puts("Enter - to minus");
        puts("Enter * to multiply");
        puts("Enter / to divide");
        puts("Enter q to quit/exit");
        char op;

//take choice from user
        scanf(" %c", &op); //space before the character specifier is a must unless have to use getchar(); function.

//handle the user choice / find the result
        switch(op)
        {
        case '+' :
            result= v1+v2;
            break;
        case '-' :
            result= v1-v2;
            break;
        case '*' :
            result= v1*v2;
            break;
        case '/' :
            result= v1/v2;
            break;
        case 'q' :
        {
            puts("Exiting...");
            flag=0;
            break;
        }
        default  :
        {
            puts("invalid operator");
            flag=0;
        }
        }

//display the result
        if(flag==1)
            printf("result:%f\n", result);

        if(op=='q')break;

    }















}
