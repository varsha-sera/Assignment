#include<stdio.h>
void armstrongnum(int);
void armstrongnum(int n)
{
	int r , sum = 0,temp ;
	temp = n;
	while(n!=0)
	{
		r = n%10;
		sum = sum + r*r*r;
		n = n/10;
	}
	if(temp==sum)    
      printf("armstrong  number ");    
    else    
      printf("not armstrong number");    
}

int main()
{
	int n;
	printf("Enter Number :\n");
	scanf("%d",&n);
	armstrongnum(n);
	
	return 0;
}
