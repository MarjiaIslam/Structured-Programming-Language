/*creating the following pattern in "n" rows:
     *
    * *
   * * *
  * * * *
 * * * * *

*/


#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    printf("\n\n");
    printf("The pattern will be like:\n");

    for(int i = 1; i<=n; i++){
        for(int j = i; j <= n; j++){
          printf(" ");
        }

        for(int j = 1; j<=(2*i-1); j++){
          if(j%2==0){
              printf(" ");
          }else if(j%2!=0){
              printf("*");
          }
        }
        printf("\n");
    }

    return 0;
}
