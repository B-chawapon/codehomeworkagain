#include<stdio.h>
int count;
int i;
int j;
int a=0;
int countstudent;
double max=0;
double sum[10];
double average[100];
double averagesolve(double a,int b);
double checkmax(double x);
struct scorestudent
{
    double score[100];
    
} arr[10][10];

int main()
{

    scanf("%d",&count); //count school
    for(i=0;i<count;i++)
    {   
        printf("------------\n");
        scanf("%d",&countstudent);
        for(j=0;j<countstudent;j++)
        {
            scanf("%lf",&arr[i][j].score[j]);
            sum[i]+=arr[i][j].score[j];
        }
        printf("%lf\n",sum[i]);
        averagesolve(sum[i],countstudent);
        printf("%lf\n",average[i]);
    }
    checkmax(average[i]);
    printf("\nThe most average is %lf",max);
        
    
    
    
    return 0;
}
double averagesolve(double a,int b)
{
    average[i]=sum[i]/countstudent;
    return average[i];
}
double checkmax(double x)
{
    max=average[0];
  for(i=0;i<count;i++)
  {
      if(average[i]>=max)
      {
          if(average[i]>max)
          {
              max=average[i];
          }
      }
     
  }
  return max;
}
