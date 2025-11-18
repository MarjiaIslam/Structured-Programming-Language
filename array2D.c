#include<stdio.h>
#include<stdio.h>
void main(){
int A[3][4]=
 {
    {4,3,2,1},
    {2,3,1,0},
    {-1,2,1,1}

 };

int B[3][4]=
 {
    {1,2,1,0},
    {-1,2,1,1},
    {-3,1,0,1}
 };

 int sum [3][4];

 for(int i=0; i<3; i++)  //ROW
 {
     for(int j=0; j<4; j++) //COLUMN
    {
        sum[i][j] = A[i][j] + B[i][j];
        printf("%d", sum[i][j]);
    }

    printf("\n");
 }
    puts("");
/* calculate the substraction of the following arrays: */

int X[4][3]=
 {
    {1,2,3},
    {5,-2,1},
    {0,3,1},
    {7,0,8}
 };

int Y[4][3]=
 {
    {-1,2,1},
    {-2,4,3},
    {5,6,0},
    {7,1,9}
 };

  int sub [4][3];
  for(int i=0; i<4; i++)
{
    for(int j=0; j<3; j++)
{
    sub[i][j] = X[i][j] - Y[i][j];

}
printf("%d", sub[i][j]);
    printf("\n");
}

/*take the array size & elements from the user*/

 int m,n,i,j;
 printf("Give the row & column size:\n");
 scanf("%d%d", &m,&n);

 int matrix[m][n];
 printf("Give inputs:\n");
 for(i=0; i<m; i++)
 {
     for(j=0; j<n; j++)
     {
         scanf("%d", &matrix[i][j]);
     }
 }

    printf("The array is:\n");
    for(i=0; i<m; i++)
   {
     for(j=0; j<n; j++)
     {
      printf("%d\t", matrix[i][j]);
     }
     printf("\n");
   }





}
