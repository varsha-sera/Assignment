#include<stdio.h>
float grosssalary(unsigned int);
float grosssalary(unsigned int BS)
{
	float GS,HRA,DA,TA;
	if(BS>10000)
	{
		HRA = (BS * 10)/100.0f;
	    TA = (BS * 5)/100.0f;
	    DA = (BS *3)/100.0f;
	}
	else
	{
	  HRA = (BS * 5)/100.0f;
	  TA = (BS * 3)/100.0f;
	}
	 GS = BS + HRA + TA+ DA;
	 printf("HRA : %f\n",HRA);
	 printf("TA : %f\n",TA);
	 printf("DA : %f\n",DA);
	 printf("GS : %f\n",GS);
	 return(GS);
}
int main()
{
	unsigned int BS;
	float GS,HRA,DA,TA;
	printf("Enter Basic salary:\n");
	scanf("%u",&BS);
	grosssalary(BS);
	return 0;
}
