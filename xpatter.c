#include<stdio.h>

int main()
{
    int row;
    int realrow;
    int i,j;
    int sum=0;
    scanf("%d",&row);
    realrow=2*row-1;
    int pos[100][100];
    char blank[100][100];
    for(i=1;i<=realrow;i++)
    {
        for(j=1;j<=realrow;j++)
        {
            if(i==j || j==realrow-(i-1))
            {   
                sum+=1;
                if(sum>9)
                {
                    sum=1;
                }
                pos[i][j]=sum;
                printf("%d",pos[i][j]);
                
            }
            else
            {

                blank[i][j]='-';
                printf("%c",blank[i][j]);
            }
        }
        printf("\n");
    }
    
    return 0;
}