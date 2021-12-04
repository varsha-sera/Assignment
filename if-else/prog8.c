#include<stdio.h>
void checkleapY(int);
void checkleapY(int year)
{
	if(year%4==0)
	{
		if(year%100==0)
		{
			if(year%400==0)
			  printf("%d is Leap Year\n",year);
			else
			  printf("%d is not a Leap Year\n",year);
		}
		else
		  printf("%d is Leap Year\n",year);
	}
	else
	  printf("%d is not a Leap Year\n",year);
}
int main()
{
	int year;
	printf("Enter a Year :\n");
	scanf("%d",&year);
	checkleapY(year);
	return 0;
}
