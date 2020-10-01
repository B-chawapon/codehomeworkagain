#include<stdio.h>
#include<string.h>
char dna1[201];
char dna2[201];
int i;
int j=0;
int sum=0;
int temp=0;
int main()
{
    scanf("%s",dna1);
    scanf("%s",dna2);

    for(i=0;i<=200;i++)
    {
        if(dna1[i]!='\0')
        {
           printf("%c",dna1[i]);
        }
    }
    printf(" ");
    for(i=0;i<=200;i++)
    {
        if(dna2[i]!='\0')
        {
          printf("%c",dna2[i]); 
        }
    }
     printf("\n");
    for(i=0;i<=200 && dna1[i]!='\0';i++)
    {
        temp=i;
        for(j=0;j<=200 && dna2[j]!='\0';j++)
        {
            if(dna1[temp]==dna2[j])
            {
                printf("%d",j);
                sum+=1;
                temp+=1;
                if(dna1[temp]!=dna2[j+1])
                {
                    temp=i;
                }
            }


        }

    }
    printf("%d",sum);
    return 0;
}