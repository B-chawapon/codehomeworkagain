#include<stdio.h>

int i;
int num[3];
int x=0;
int max;
int a=0;
int count=0;

int main()
{
    
    for(i=0;i<3;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<3;i++)
   {
       max=num[i];
       while(max!=1)
       {
                if(max%2==0)
                {
                    max=max/2;
                    count++;
                }
                else if(max%2==1)
                {
                    max=max-1;
                    max=max/2;
                    count++;
                }
        }
   }
     printf("%d",count);
    return 0;
}