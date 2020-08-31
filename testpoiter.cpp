#include<stdio.h>

int i;
int num[3];
int x=0;
int max=0;

int main()
{
    for(i=0;i<3;i++)
    {
        scanf("%d",&num[i]);
    }
   max=num[0];
  for(i=0;i<=4;i++)
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
          printf("%d",max);
          break;
      }
  }
    

    return 0;
}