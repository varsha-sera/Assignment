#include<stdio.h>
void pattern();
void pattern(){
    int i,j;
    for(i=1;i<=5;i++)
	    	{
	    		for(j=1;j<=4;j++)
	    		{
	    			if(j==1||(i==3&&j==3)||(i==4&&j==4)||(i==5&&j==4))
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
