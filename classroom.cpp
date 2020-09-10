#include<stdio.h>
int main()
{
	char text[100];
    char *ch;
    scanf("%s",text);
    ch =text;
    int i=0;
    while(*ch!='\0')
    {
        if(*ch>='A'&& *ch<='Z')
        {
            *ch+=32;
        }
        else if(*ch>='a'&& *ch<='z')
        {
            *ch-=32;
        }
         printf("%c",*ch);
        ch++;
    }
   
    
	return 0;
}
