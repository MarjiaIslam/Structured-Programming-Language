#include<stdio.h>
int main(){

 printf("\nWelcome to UIU Grocery Store\n\nMenu:");
    printf("\n1. Egg..............12/-\n2. Soft Drinks......25/-\n3. Beef............700/-\n4. Rice.............50/-\n\n");

    int eggs, rice, beef, drinks;

    printf("Enter the number of Eggs you want to buy: ");
    scanf("%d", &eggs);
    eggs=eggs*12;

    printf("Enter the number of Soft Drinks you want to buy: ");
    scanf("%d", &drinks);
    drinks=drinks*25;

    printf("Enter the number of Beef you want to buy: ");
    scanf("%d", &beef);
    beef=beef*700;

    printf("Enter the number of Rice you want to buy: ");
    scanf("%d", &rice);
    rice=rice*50;

    int sum = eggs+beef+drinks+rice;

    printf("\nThe total amount you have to pay:");
    printf("%d/-\n",sum);

    while(1){


        int amount;
        printf("\nEnter the amount you want to pay:");
        scanf("%d", &amount);

        int change, extra;
        change = amount - sum;
        extra = sum - amount;
        if(sum<amount){
        printf("Thank You for Shopping With Us!\nYour change is %d/-", change);


        }else if (sum>amount){
         printf("The amount you've payed is not sufficient! You have to pay %d/- more! Please pay the total amount again.", extra);

        }else{
        printf("Thank you for shopping with us.\n");break;

        }

        }
    }





