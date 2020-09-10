#include<stdio.h>

int main()
{
    char text[20];
    char *front;
    char *back;
    front=text;
    back=text;
    bool palindrome =0;
    scanf("%s",text);
    while(*back != '\0')
    {
        back++;
    }
    back-=1;
    for(;front<back;front++,back--)
    {
        if(*front==*back)
        {
            palindrome =1;
        }
        else if(*front!=*back)
        {
            palindrome=0;
        }
    }
    if(palindrome==1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}