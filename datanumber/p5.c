#include<stdio.h>
void pattern();
void pattern()
{
	int i,j;
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
int main()
{
	pattern();
	return 0;
}
