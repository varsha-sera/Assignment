#include<stdio.h>
void reversnum(int);
void reversnum(int n)
{
	int rem,sum = 0;
		while(n!=0)
	{
		rem = n%10;
		sum = sum * 10 + rem;
		n = n/10;
	}
	printf("%d is revers of given number",sum);
}
int main()
{
	int n;
	printf("Enter Number :\n");
	scanf("%d",&n);
	reversnum(n);

  return 0;
}
