#include<stdio.h>
float marksheet(float,float,float,float,float);
float marksheet(float Eng,float phy,float che,float hindi,float maths)
{
	Eng,phy,che,hindi,maths;
	float total,percentage;
	total=Eng+phy+che+hindi+maths;
	percentage=total/5;
	printf("total=%2f\n",total);
	printf("percentage=%2f\n",percentage);
	return(percentage);
	
}
int main()
{
	float Eng,phy,che,hindi,maths;
	float total,percentage;
	printf("Enter the 5 subject of marks:\n");
	scanf("%f%f%f%f%f",&Eng,&phy,&che,&hindi,&maths);
	marksheet(Eng,phy,che,hindi,maths);
	
	return 0;
}
