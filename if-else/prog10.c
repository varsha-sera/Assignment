#include<stdio.h>
void checkeigibality(int);
void checkeigibality(int age)
{
	if(age >= 18)
	   printf("Eigibal for Voting\n");
	else
	   printf("Not Eigibal for Voting\n");
}
int main()
{
	int age;
	printf("Enter Age:\n");
	scanf("%d",&age);
	checkeigibality(age);
	return 0;
}
