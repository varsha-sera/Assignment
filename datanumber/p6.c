#include<stdio.h>
void pattern(int);
void pattern(int n)
{
	int i,j,k,space;
	for(i=1;i<=n;i++)
	{
		for(space=1;space<=n-i;space++)
		{
			printf(" ");
		}
	
		for( j=1;j<=i;j++)
		{
	 	     printf("%d",j);
		}
		for(k=j-2;k>=1;k--)
		{
			printf("%d",k);
		}
		printf("\n");
	}
}
int main()
{
	int n;
	printf("Enter no :\n");
	scanf("%d",&n);
	pattern(n);
	return 0;
}
