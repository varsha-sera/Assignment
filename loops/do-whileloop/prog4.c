#include<stdio.h>
void checkseries(int);
void checkseries(int n)
{
	int a,b,c;
	a=-1,b=1;
	
       do{
		c = a + b ;
		printf("%d",c);
		a = b;
		b = c;
		n--;
	   }while(n!=0);
}
int main()
{
	int n;
	printf("Enter Number :\n");
	scanf("%d",&n);
	checkseries(n);
	return 0;
}
