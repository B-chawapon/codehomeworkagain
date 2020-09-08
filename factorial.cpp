#include<stdio.h>
    long long int a,r,nminusr;
    double i;
    double n=1;
    double ncr=1;
    double rn=1;
    double num[20];
double nfac(long long int k);
double rfac(long long int k);
double nrfac(long long int k,long long int l);

int main()
{
    scanf("%lld",&a);   
    if(a>=1 && a<=25)
    {
        if(a%2==0)
        {
            r=a/2;
        }
        else
        {
            a=a+1;
            r=a/2;
        }
    }
   nfac(a);
   nrfac(a,r);
   rfac(r);
   
    printf("%.0lf\n",n/(ncr*rn));

    return 0;
}
double nfac(long long int k)
{
  
    for(i=1;i<=a;i++)
    {
  
        n*=i;
    }
    return n;
}
double nrfac(long long int k,long long int l)
{
    for(i=1;i<=a-r;i++)
   {
       
        ncr*=i;
   }
   return ncr;
}
double rfac(long long int k)
{
    for(i=1;i<=r;i++)
   {

        rn*=i;
   }
   return rn;
}



