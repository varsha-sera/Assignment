#include<stdio.h>
int simplei();
int simplei()
{  
    int p,r,t;
    float si;
	printf("Enter p\n");
	scanf("%d",&p);
	printf("Enter r\n");
	scanf("%d",&r);
	printf("Enter t\n");
	scanf("%d",&t);
	
   si=p*r*t/100.0f;
   return(si);
}
   int main()
{
	float x;
	
	x=simplei();
	printf("SI=%.2f",x);
	return 0;
}
