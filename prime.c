#include <stdio.h>
int main() 
{
    int number;
    int i;
    int prime;
    int checkvalue;
    scanf("%d", &number);
    if(number>0)
    {
        for (i = 2;i<=number/2;i++) 
        {
            checkvalue=number%i;
            if (checkvalue==0) 
            {
                prime=1;
                break;
            }
        }
        if (prime==1 ||number==1) 
        {
            printf("No");
        }
        else 
        {
           if (prime!=1)
            {
                printf("Yes",number);
            }
           
        }  
    }
    else
    {
        printf("error");
    }
    
    return 0;
}