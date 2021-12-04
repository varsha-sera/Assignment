#include<stdio.h>
void lcmoftwono(int,int);
void lcmoftwono(int num1,int num2)
{
	int max;
	max = (num1 > num2) ? num1 :num2;
	do
	{
       if(max % num1 == 0 && max % num2 == 0)
	   {
       printf("The LCM of %d and %d is %d.",num1,num2,max);
       break;
       }
       ++max;
	}while(1);
	
}
int main()
{
	int num1,num2;
	printf("Enter two positive Numbers :\n");
	scanf("%d%d",&num1,&num2);
	lcmoftwono(num1,num2);
	return 0;
}
