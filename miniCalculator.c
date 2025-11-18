#include <stdio.h>

int main()
{
    printf("\n1. Sum\n2. Minus\n3. Multiple\n4. Divide\n\n");

    int i;

    printf("Enter the number to use the following operators: ");
    scanf("%d", &i);

    int x, y;
    int cal;

    printf("Enter the first number: ");
    scanf("%d", &x);

    printf("Enter the second number: ");
    scanf("%d", &y);

    if(i==1){
        cal = x+y;
        printf("The addition is %d.", cal);
    }else if(i==2){
        cal = x-y;
        printf("The subtraction is %d.", cal);
    }else if(i==3){
        cal = x*y;
        printf("The multiplication is %d.", cal);
    }else if(i==4){
        cal = x/y;
        printf("The division is %d.", cal);
    }else{
        printf("\n\nPlease enter the correct number of operator you want to use.\n\n");

    }

    return 0;
}

