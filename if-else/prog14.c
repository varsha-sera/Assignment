#include<stdio.h>
void checkIfdivisible(int);
void checkIfdivisible(int num)
{
	if((num%5 == 0) && (num%11 == 0))
	  printf("%d is divisible by 5 and 11\n",num);
	else
	  printf("%d is not divisible by 5 and 11\n",num);
}
int main()
{
	int num;
	printf("Enter Number :\n");
	scanf("%d",&num);
	checkIfdivisible(num);
	return 0;
	
}
