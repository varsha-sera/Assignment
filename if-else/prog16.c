#include<stdio.h>
int a[12]={31,28,31,30,31,30,31,31,30,31,30,31},num; 
void checkMonthdays(num);
void checkMonthdays(int num)
{
	if(num>12 || num<1)
    {
     printf("Invalid input");
    }
    else if(num==2)
    {
    	printf("no of days in month 2 is either 29 or 28");
    }
    else
    
    	printf("no of days in month %d is %d",num,a[num-1]);
}
int main() 
{
    
    printf("Enter the month:");
 
    scanf("%d",&num);
    
    checkMonthdays(num);
    return 0;
}
