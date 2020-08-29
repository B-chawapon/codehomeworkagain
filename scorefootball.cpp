#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k;
    char team[5][50];
    char text[50];
    int score[4]={0};
    /*int got[4]=0;
    int fail[4]=0;*/
    int scoreboard[4][4];
    for(i=1;i<=4;i++)     // TEAM NAME************
    {
        scanf("%s",text);
        strcpy(team[i],text);
    }

    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            scanf("%d",&scoreboard[i][j]);
        }
    }

     for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
           if(i==j)
            {
                score[i]+=0;
            }
            else if(scoreboard[i][j]>scoreboard[j][i])
            {
                score[i]+=3;
            
            }
            else if(scoreboard[i][j]==scoreboard[j][i])
            {
                  score[i]+=1;
            
            }
            else if(scoreboard[i][j]<scoreboard[j][i])
            {
                score[i]+=0;
              
            }
            
            
        }
    }
    printf("\n%s %d",team[1],score[1]);
    printf("\n%s %d",team[2],score[2]);
    printf("\n%s %d",team[3],score[3]);
    printf("\n%s %d",team[4],score[4]);
    
    
 
    
    return 0;
}