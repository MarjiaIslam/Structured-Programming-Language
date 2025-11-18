#include<stdio.h>
#include<stdlib.h>

///problem:take three integer from user, find & display the greatest of them. (using nested if else)

void main(){
int a,b,c;

printf("enter three integer of your choice:\n");
scanf("%d%d%d",&a,&b,&c);
if (a>b){
 if(a>c){
         printf("a=%d is the greatest.",a);
         }

 else if(a==c){
    printf("a & c are equal");
 }
 else{
    printf("c=%d is the greatest",c);
 }
}

else if (b>a){
    if(b>c){
            printf("b=%d is the greatest.",b);
        }
  else if (b==c){
    printf("b & c are equals.");
  }
  else {
    printf("c=%d is the greatest.",c);
  }
}

  else if (a==b){
        if (b==c){
            printf("all the 3 integer are equal.");
        }
      else {
        printf("a & b are equal.");
      }

}


}
