#include<stdio.h>
    long long int temp;
    long long int a,r,nminusr;
    long long int i;
    long long int n=1;
    long long int ncr=1;
    long long int rn=1;
    long long int num[20];
long long int nfac(long long int k);
long long int rfac(long long int k);
long long int nrfac(long long int k,long long int l);

int main()
{
    scanf("%lld %lld",&a,&r);   
   
   nfac(a);
   nrfac(a,r);
   rfac(r);
    printf("%lld\n",n);
     printf("%lld\n",ncr);
      printf("%lld\n",r);
    printf("%lld\n",n/(ncr*rn));

    return 0;
}
long long int nfac(long long int k)
{
  
    for(i=1;i<=a;i++)
    {
        num[i]=i;
        n*=num[i];
    }
    return n;
}
long long int nrfac(long long int k,long long int l)
{
    for(i=1;i<=a-r;i++)
   {
       num[i]=i;
        ncr*=num[i];
   }
   return ncr;
}
long long int rfac(long long int k)
{
    for(i=1;i<=r;i++)
   {
       num[i]=i;
        rn*=num[i];
   }
   return rn;
}



