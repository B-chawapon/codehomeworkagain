#include<stdio.h>

int main()
{
    int n,m,l,k,c;
    int i=1;
    int j=1;
    int sum=0;
    scanf("%d %d",&n,&m);
    scanf("%d %d",&l,&k);
    scanf("%d",&c);
    if(1<=n && n<=100 && 1<=m && m<=100)
    {
        int num[n][m];
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                scanf("%d",&num[i][j]);
                sum+=num[i][j];
            }
        }
    }
    if(1<=l & l<=100 && 1<=k && k<=100 && 1<=c && c<=1000)
    {
        sum=sum+(l*k*c);
    }
    if(sum%c==0)
    {
        printf("%d",sum/c);
    }
    else
    {
        printf("%d",(sum/c)+1);
    }
    return 0;
}