#include <stdio.h>
int main()
{
   int i,j,k;
   int row1,col1,row2,col2;
   int A[10][10],B[10][10],C[10][10];
   printf("Enter rows and columns of Matrix A : ");
   scanf("%d %d",&row1,&col1);
   for (i=0; i<row1; i++)
      for (j=0; j<col1; j++)
      {
       
         scanf("%d",&A[i][j]);
      }
   printf("Enter rows and columns of Matrix B : ");
   scanf("%d %d",&row2,&col2);
   for (i=0; i<row2; i++)
      for (j=0; j<col2; j++)
      {
         
         scanf("%d",&B[i][j]);
      }
    for(i=0; i<row1; i++)
	{
		for(j=0; j<col2; j++)
		{
			C[i][j] = 0;
			for(k=0; k<col1; k++)
			{
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	printf("Matrix A x Matrix B\n");
	for (i=0; i<row1; i++)
	{
		for (j=0; j<col2; j++)
        printf("%d  ", C[i][j]);
        printf("\n");;
	}
}