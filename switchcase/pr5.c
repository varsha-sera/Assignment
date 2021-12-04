#include<stdio.h>
//void function(int);
void function(int choice,float radius)
{   

	float area,circum,volume,h;
	switch(choice)
	{
	case 1 :

	area = 3.14 * radius * radius;
	printf("Area of circle is %.2f",area);
	break;
	case 2 :
	
	circum = 2 * 3.14 * radius ;
	printf("Circumfrence is %.2f",circum);
	break;
	case 3 :


	volume = 3.14 * radius * radius * h;
	printf("Volume of Cylinder is %.2f",volume);
	break;
	default:
    printf("Sorry, Invalid Choice\n");	
	}
}
int main()
{
	int choice;
	float radius;
	printf("Select your Choice\n");
    
	printf("1. Area of Circle\n");
	printf("2. Area of Circumfence\n");
	printf("3. Volume of Cylinder\n");
	scanf("%d",&choice);
	printf("Enter Radius :\n");
	scanf("%f",&radius);
	function(choice,radius);
	return 0;
}
