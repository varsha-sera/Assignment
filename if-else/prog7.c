#include<stdio.h>
void checkgreatest(int,int);
void checkgreatest(int num1,int num2)
{
	if(num1>num2)
	  printf("%d is Greastest Number");
	else
	  printf("%d is Greastest Number");
}
int main()
{
	int num1,num2;
	printf("Enter Two Numbers:\n");
	scanf("%d%d",&num1,&num2);
	checkgreatest(num1,num2);
	return 0;
}
