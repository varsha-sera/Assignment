#include<stdio.h>
int fact(int);
int main()
{
	int n,x;
	printf("Enter any number :\n");
	scanf("%d",&n);
	x = fact(n);
	printf("Factorial of number is %d\n",x);
}
int fact(int n)
{
	if(n==1)
	  return 1;
	return n*fact(n-1);
}
