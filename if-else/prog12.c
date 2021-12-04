#include<stdio.h>
int checkMaximum(int,int,int);
int checkMaximum(int num1,int num2,int num3)
{
	int maximum;
	if(num1>num2)
	{
		if(num1>num3)
		  maximum = num1;
		else
		  maximum = num3;
	}
	else
	{
		if(num2>num3)
		  maximum = num2;
		else
		  maximum = num3;
	}
}
int main()
{
	int num1,num2,num3,maximum;
	printf("Enter Three Numbers :\n");
	scanf("%d%d%d",&num1,&num2,&num3);
	maximum = checkMaximum(num1,num2,num3);
	printf("%d is Maximum Number\n",maximum);
	
	return 0;
}
