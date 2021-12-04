#include<stdio.h>
void checkTriangle(int,int,int);
void checkTraingle(int side1,int side2,int side3)
{
	int sum;
	sum = side1+side2+side3;
	if(sum == 180 && side1 > 0 && side2 > 0 && side3 > 0)
	   printf("Traingle is Valid\n");
	else
	   printf("Traingle is not Valid\n");
	
}
int main()
{ 
    int side1,side2,side3;
    printf("Enter three sides of traingle :\n");
    scanf("%d%d%d",&side1,&side2,&side3);
    checkTraingle(side1,side2,side3);
	return 0;
}
