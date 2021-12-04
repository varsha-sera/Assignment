#include<stdio.h>
void checkNumber(int);
void checkNumber(int num)
{
  if(num > 0)
    printf("%d is Positive\n",num);
  else if(num == 0)
    printf("%d is Zero\n",num);
  else
    printf("%d is Nagetive\n",num);
}
int main()
{
    int num;
    printf("Enter Number :\n");
	scanf("%d",&num);
	checkNumber(num);
	
	return 0;
}
