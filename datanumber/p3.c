#include<stdio.h>
void pattern();
void pattern()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{   if(j==1 || i==5 || i==j)
		        printf("%d",j);
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
