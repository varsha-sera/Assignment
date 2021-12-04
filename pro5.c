#include<stdio.h>
float triangle(float,float);
float triangle(float b,float h)
{   
    float area;
	area=b*h/2;
	printf("area=%f",area);
}
int main()
{   float area,b,h;
	printf("Enter b\n");
	scanf("%f",&b);
	printf("Enter h\n");
	scanf("%f",&h);
	triangle(b,h);
	
	return 0;
}
