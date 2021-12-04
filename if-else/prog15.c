#include<stdio.h>
char *a[7] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
void weekday(int);
void weekday(int num)
{
	if(num>7 || num<1)
	  printf("Invalid Input");
	else
	  printf("%s",a[num-1]);
}
int main()
{
	int num;
	
	printf("Enter Week Numbers(between 1 to 7):\n");
	scanf("%d",&num);
	weekday(num);
	
	return 0;
}
