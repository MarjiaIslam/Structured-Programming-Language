#include<stdio.h>
#include<stdlib.h>
 void main(){
 int num, remainder, reverse_num = 0;
  printf("Enter the integer you want to check:");
  scanf("%d", &num);
  int original_num = num;

  for(num; num!=0; num/=10)
    {
      remainder = num%10;
      reverse_num = reverse_num *10 + remainder;
    }

    printf("The reverse number is %d\n\n", reverse_num);

    if(original_num == reverse_num)
        {printf("Yes, the number %d is palindrome.\n", original_num);}
    else
        {printf("No, the number %d is not palindrome.\n", original_num);}



}
