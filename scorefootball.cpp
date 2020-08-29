#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int i,j;
    char team[5][50];
    char text[50];
    int score[4]={0};
    int got[4]={0};
    int daisea[4]={0};
    int scoreboard[4][4];
    int max;
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
     for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            got[i]+=scoreboard[i][j];
            daisea[i]+=scoreboard[i][j]-scoreboard[j][i];
        }
    }
   
    
    printf("\n%s %d %d %d",team[0],score[0],got[0],daisea[0]);
    printf("\n%s %d %d %d",team[1],score[1],got[1],daisea[1]);
    printf("\n%s %d %d %d",team[2],score[2],got[2],daisea[2]);
    printf("\n%s %d %d %d",team[3],score[3],got[3],daisea[3]);
    
 
    
    return 0;
}
