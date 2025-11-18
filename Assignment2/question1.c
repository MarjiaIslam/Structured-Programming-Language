#include<stdio.h>
#include<math.h>
//A program that will find x^y (x to the power y) where x, y are positive integers.

  void main(){
   int x,y,exponent;

        printf("Enter two positive integers:\n");
        scanf("%d%d", &x, &y);
        exponent = pow(x,y);
        printf("the result is %d\n", exponent);


}
