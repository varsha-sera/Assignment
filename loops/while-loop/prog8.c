#include<stdio.h>
void genricroot(int);
void genricroot(int num)
{
	int temp = num;
	int rem , sum =0;
	while(temp > 0)
	{
		rem = temp % 10;
		sum = sum + rem;
		temp = temp /10;
	
	if(temp == 0)
	  {
	  	if(sum > 9)
	  	{
	  		temp = sum;
	  		sum = 0;
		}
	  }
    }
    printf("Generic Root of %d is %d\n", num, sum);
}
int main()
{
	int num;
	printf("Enter a number :\n");
	scanf("%d",&num);
	genricroot(num);	
	return 0;
}
