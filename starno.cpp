#include<stdio.h>
#include<math.h>
int main()
{
    int collum;
    int row;
    int oddoreven;
    int i,j;
    scanf("%d",&collum);
    row=collum;
    oddoreven=collum%2;
    char pos[100][100];
    if(oddoreven==1) //odd
    {
        for(i=1;i<=row/2+1;i++)
        {
            for(j=1;j<=collum;j++)
            {
                if(collum/2== j-i||collum/2+2==i+j)
                {
                    pos[i][j]='*';
                    printf("%c",pos[i][j]);
                }
                else
                {
                    pos[i][j]='-';
                    printf("%c",pos[i][j]);
                }
            }
            printf("\n");
        }
        for(i=(collum+1)/2-1;i>0;i--)
        {
            for(j=1;j<=collum;j++)
            {
                if(i+j==(collum+1)/2+1 || j-i==(collum+1)/2-1)
                {
                   pos[i][j]='*';
                    printf("%c",pos[i][j]);
                }
                else
                {
                    pos[i][j]='-';
                    printf("%c",pos[i][j]);
                }
            }
            printf("\n");
        }
        
    }
    else //even
    {
        for(i=1;i<=collum/2;i++)
        {
            for(j=1;j<=collum-1;j++)
            {
               if(collum/2+1==i+j ||collum/2-1==j-i)
               {
                    pos[i][j]='*';
                    printf("%c",pos[i][j]);
               }
                else
                {
                    pos[i][j]='-';
                    printf("%c",pos[i][j]);
                }
            }
            printf("\n");
        }
        for(i=1;i<=collum/2;i++)
        {
            for(j=1;j<=collum-1;j++)
            {
                if(i==j ||collum==i+j)
                {
                    pos[i][j]='*';
                    printf("%c",pos[i][j]);
                }
                else
                {
                    pos[i][j]='-';
                    printf("%c",pos[i][j]);
                }
            }    
             printf("\n");
        }
    }
    return 0;
}