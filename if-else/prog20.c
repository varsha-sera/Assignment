#include<stdio.h>
void checkAllsides(int,int,int);
void checkAllsides(int side1,int side2,int side3)
{
	if((side1+side2 > side3) && (side2 + side3 > side1) && (side3 + side1 > side2))
	   printf("Traingle is Valid\n");
	else
	   printf("Traingle is not Valid\n");
	
}
int main()
{ 
    int side1,side2,side3;
    printf("Enter three sides of traingle :\n");
    scanf("%d%d%d",&side1,&side2,&side3);
    checkAllsides(side1,side2,side3);
	return 0;
}
