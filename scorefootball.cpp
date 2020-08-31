#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int i,j;
    char team[5][50];
    char text[50];
    int score[4]={0};
    int scoreboard[4][4];
    for(i=0;i<4;i++)     // TEAM NAME************
    {
        scanf("%s",text);
        strcpy(team[i],text);
    }

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&scoreboard[i][j]);
        }
    }

     for(i=0;i<4;i++)
    {
        for(j=i+1;j<4;j++)
        {
           if(scoreboard[i][j]>scoreboard[j][i])
           {
               score[i]+=3;
           }
           else if(scoreboard[i][j]==scoreboard[j][i])
           {
               score[i]+=1;
               score[j]+=1;
           }
           else if(scoreboard[i][j]<scoreboard[j][i])
           {
               score[j]+=3;
           }
        }
    }
    printf("%s %d",team[0],score[0]);
    printf("\n%s %d",team[1],score[1]);
    printf("\n%s %d",team[2],score[2]);
    printf("\n%s %d",team[3],score[3]);
    return 0;
}
