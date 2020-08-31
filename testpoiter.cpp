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
    int limit =checkmax(max);
   for(a=0;a<=limit;a++)
   {
       if(num[0]!=1 &&num[1]!=1&&num[2]!=1)
       {    
        checkmax(max);
        if(max%2==0)
        {
            max=max/2;
            num[a]=max;
        }
        else if(max%2==1)
        {
            max=max-1;
            max=max/2;
            num[a]=max;
        }
        count=count+1;
       }
       else
       {
           printf("aa %d",count);
           break;
       }
       
        
    }


    

    return 0;
}