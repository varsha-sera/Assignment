#include<stdio.h>
int maximum(int,int);
int maximum(int a,int b)
{
   if(a>b)
       return a;
	else
	    return b;	
}
int main()
{
	int a,b,result;
	printf("Enter Two Numbers :\n");
	scanf("%d%d",&a,&b);
	result = maximum(a,b);
	printf("%d is Maximum Number\n",result);
	return 0;
}
