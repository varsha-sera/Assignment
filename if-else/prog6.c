#include<stdio.h>
void checkOddEven(int);
void checkOddeven(int num)
{
	if(num%2==0)
	  printf("Number is Even");
	else
	  printf("Number is Odd");
}
int main()
{
	int num;
	printf("Enter any Number:\n");
	scanf("%d",&num);
	checkOddeven(num);
	return 0;
}
