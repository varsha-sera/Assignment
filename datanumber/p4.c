#include<stdio.h>
void pattern();
void pattern()
{
int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{   
		    if(i==1 || j==1 )
		          printf("%d",j);
		   else if(j==(5+1)-i)
		   		printf("5");
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
