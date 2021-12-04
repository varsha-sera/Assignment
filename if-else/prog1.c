#include<stdio.h>
int biggestnum(int,int,int);
int main()
{
	int a,b,c;
	int result;
	printf("Enter three numbers :\n");
	scanf("%d%d%d",&a,&b,&c);
	result = biggestnum(a,b,c);
	printf("Biggestnumber is :%d\n",result);
	return 0;
	
}
int biggestnum(int a,int b,int c)
{
	if(a>b)
	{
		if(a>c)
		 return a;
		else
		 return c;
	}
	else
	{
		if(b>c)
		  return b;
		else
		  return c;
	}
}
