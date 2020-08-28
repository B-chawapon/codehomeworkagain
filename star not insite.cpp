#include<stdio.h>
int main()
{
    int collum;
    int row;
    int collumeven;
    int oddoreven;
    int i,j;
    scanf("%d",&collum);
    row=collum;
    oddoreven=collum%2;
    if(oddoreven==1) //odd
    {
        for(i=1;i<=row;i++)
        {
            for(j=1;j<=collum;j++)
            printf("*");
        }
    }
    else //even
    {
        collumeven=collum-1;
        for(i=1;i<=row;i++)
        {
            for(j=1;j<=collumeven;j++)
            printf("*");
        }
    }
    return 0;
}