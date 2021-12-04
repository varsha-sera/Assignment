#include<stdio.h>
void pattern();
void pattern(){
    int i,j;
   	for(i=1;i<=3;i++)
	    	{
	    		for(j=1;j<=7;j++)
	    		{
	    			if(i==1&&(j==1||j==7)||i==2&&(j==2||j==4||j==6)||i==3&&(j==3||j==5))
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
