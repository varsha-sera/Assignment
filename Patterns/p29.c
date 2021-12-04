#include<stdio.h>
void pattern();
void pattern(){
    int i,j;
   		for(i=1;i<=5;i++)
	    	{
	    		for(j=1;j<=3;j++)
	    		{
	    			if(j==2)
	    			  printf("*");
	    			else
	    			  printf(" ");
				}
				printf("\n");
			}
}
int main()
{
    pattern();
    return 0;
}
