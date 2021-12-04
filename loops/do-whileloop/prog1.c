#include<stdio.h>
void revers(int);
void revers(int n)
{
	int rem,sum = 0;
	do{
		rem = n%10;
		sum = sum * 10 + rem;
		n = n/10;
		
	}while(n!=0);
	printf("%d is revers number",sum);
}
int main()
{
	int n;
	printf("Enter Number :\n");
	scanf("%d",&n);
	revers(n);
	
	return 0;
}
