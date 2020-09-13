#include<stdio.h>
	#include<string.h>
	
	int main()
	{
    
	char dice[1001];
	int i,j;
	    int looktao;
	    scanf("%d",&looktao);
	    while(looktao--)
	    {
            int top=1,front=2,left=3,back=5,right=4,bott=6,t;
            scanf("%s",dice);
	        for(j=0;dice[j]!=0;j++)
	        {
	            if(dice[j]=='F')
	            {
	                t=top;
					top=back;
					back=bott;
					bott=front;
					front=t;
	            }
	            else if(dice[j]=='B')
	            {
	                t=top;
					top=front;
					front=bott;
					bott=back;
					back=t;
	            }
	            else if(dice[j]=='L')
	            {
	                t=top;
					top=right;
					right=bott;
					bott=left;
					left=t;
	            }
	            else if(dice[j]=='R')
	            {
	                t=top;
					top=left;
					left=bott;
					bott=right;
					right=t;
	            }
	            else if(dice[j]=='C')
	            {
	                
	                t=front;
					front=right;
					right=back;
					back=left;
					left=t;
	            }
	            else if(dice[j]=='D')
	            {
	                
					t=front;
					front=left;
					left=back;
					back=right;
					right=t;
	                
	            }
				printf("%d ",front); 
	        }
		
           
	    }
	   
    return 0;
	}