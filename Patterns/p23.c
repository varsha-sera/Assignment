#include<stdio.h>
void pattern();
void pattern(){
    int i,j;
    for(i=1;i<=5;i++)
	    	{
	    		for(j=1;j<=5;j++)
	    		{
	    			if((i==2&&j==1)||(i==3&&j==1)||(i==4&&j==1)||(i==5&&j==2)||(i==5&&j==3)||(i==5&&j==4)||(i==1&&j==2)||(i==1&&j==3)||(i==1&&j==4)||(i==2&&j==5)||(i==3&&j==4)||(i==3&&j==3)||(i==2&&j==2))
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