#include<stdio.h>

int i;
int num[3];
int x=0;
int max=0;
int a=0;
int count=0;
int checkmax(int x)
{
    max=num[0];
  for(i=0;i<=10;i++)
  {
      if(num[i]>=max)
      {
          if(num[i]==max)
          {
              max=num[i];
          }
          else
          {
              max=num[i];
          }
      }
      else
      {
          a=i-1;
          //printf("%d",max);
          num[a]=max;
          break;
      }
  }
  return max;
}
int main()
{

    for(i=0;i<3;i++)
    {
        scanf("%d",&num[i]);
    }
    checkmax(max);
    printf("%d",max);


    return 0;
}