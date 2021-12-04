// put even and odd element of an array in two seperat array
#include<stdio.h>
int odd(int a[])
{
  int count=0,i;
  for(i=0;i<9;i++)
{
  if(a[i]%2==0)
  count++;
}
return count;
}
int even(int a[])
{
  int count1=0,i;
  for(i=0;i<9;i++)
	{
	if(a[i]%2==1)
	count1++;
	}
return count1;
}
int main(){

  int a[]={9,4,-2,-1,5,8,5,-3,2},ev,od;

  ev=even(a);
  od=odd(a);
	
  printf("%d\t%d",ev,od);

return 0;
}
