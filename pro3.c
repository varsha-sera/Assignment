#include<stdio.h>
int factorial();
int factorial()
{
	int n,fact=1;
	printf("Enter number=\n");
	scanf("%d",&n);
	while(n!=0)
	{
		fact=fact*n;
		n--;
	}
	
	return(fact);
	
}
int main()
{   
    int fact;
	fact=factorial();
	printf("Factorial=%d",fact);
	return 0;
}
