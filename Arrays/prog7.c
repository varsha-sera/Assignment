#include<stdio.h>
int negative(int a[])
{
	int i,count=0;

	for(i=0;i<9;i++)
	{
	if(a[i]<=0)
	count++;
	}
return count;
}
int main(){

int a[]={9,4,-2,-1,5,8,5,-3,2},l;
l=negative(a);
printf("count=%d\n",l);

return 0;
}
