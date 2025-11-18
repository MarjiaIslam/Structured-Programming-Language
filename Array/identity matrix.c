#include<stdio.h>
#include<stdlib.h>
void main(){
/*find the following matrix is an identity matrix or not.
 [1 0 0
  0 1 0
  0 0 1]
*/

int mat [3][3]={1,0,0,0,1,0,0,0,1};
int c1, c2, isIM=1;
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        c1=(i==j)&&(mat[i][j]!=1);
        c2=(i!=j)&&(mat[i][j]!=0);
        if(c1||c2){
        isIM=0;
        break;}
    }

       if(isIM==0)break;
  }

    if(isIM==0) puts("The matrix is not an identity matrix.");
      else     {puts("The matrix is an identity matrix.");}








}























