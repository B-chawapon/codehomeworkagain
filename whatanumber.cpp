#include<stdio.h>
#include<math.h>
int main()
{
    int digits;
    int i;
    scanf("%d",&digits);
    int number[1000];
    int max;
    int min;
    for(i=1;i<=digits;i++)
    {
        scanf("%d",&number[i]);
    }
    for(i=1;i<=digits;i++)
    {
        if(number[i]>=number[i+1])
        {
            min=number[i+1];
            printf("%d ",min);
        }
    }
   
}