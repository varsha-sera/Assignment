#include<stdio.h>
void pattern();
void pattern(){
    int i,j;
   	for(i=1;i<=4;i++)
	    	{
	    		for(j=1;j<=4;j++)
	    		{
	    			if(i==1||i==4||i==2&&j==3||i==3&&j==2)
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
