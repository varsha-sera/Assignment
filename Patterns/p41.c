#include<stdio.h>
void pattern();
void pattern(){
    int i,j;
   for(i=1;i<=5;i++)
	    	{
	    		for(j=1;j<=5;j++)
	    		{
	    			if(i==j||(i==1&&j==5)||(i==2&&j==4)||(i==4&&j==2)||(i==5&&j==1))
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
