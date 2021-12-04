#include<stdio.h>
void numbercheck(int);
void numbercheck(int num)
{
   if(num>0)
   printf("Number is Positive:%d\n",num);
   else if(num<0)
   printf("Number is Negative:%d\n",num);
   else
   printf("Nither Positive Nor Nagetive :%d\n",num);

}
int main()
{
	int num;
	printf("Enter a Number:\n");
	scanf("%d",&num);
	 numbercheck(num);
    return 0;
	
}
