#include<stdio.h>
void pattern(int);
void pattern(int n)
{
	int i , k , l;
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=i;k++)
		{
			printf("%d ",k);
		}
		for(l=i-1;l>=1;l--)
		{
			printf("%d ",l);
		}
		printf("\n");
	}
}
int main()
{
	int n;
	printf("Enter the no :");
	scanf("%d",&n);
	pattern(n);
	
	return 0;
}
