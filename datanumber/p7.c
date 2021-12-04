#include<stdio.h>
void pattern(int);
void pattern(int n)
{
	int i,j,k,star;
	for(i=1;i<=n;i++)
	{
		for(star=1;star<9-i;star++)
		   printf("*");
		for(j=1;j<=i;j++)
		   printf("%d*",i);
	    for(star=1;star<8-i;star++)
		   printf("*");
		   printf("\n"); 
	}
}
int main()
{
	int n;
	printf("enter no :\n");
	scanf("%d",&n);
	pattern(n);
	return 0;
}
