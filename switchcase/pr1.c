#include<stdio.h>
void function(int);
void function(int x)
{
	
  int a,b,centigrade, fahrenheit;
  switch(x)
 {
 case 1:
       printf("\nEnter The Value of Fahrenheit Temperature: ");
       scanf("%d",&a);
       centigrade=5*(a-32)/9;
       printf("\n\nCelsius Temperature: %d ",centigrade);
 break;
 case 2:
       printf("\nEnter The Value of Celsius Temperature: ");
       scanf("%d",&b);
       fahrenheit=((9*b)/5)+32;
       printf("\n\nFahrenheit Temperature: %d ",fahrenheit);
  break;
 default:
       printf("\n\nWrong Choice.....Try Again!!!\n");
 }	
}
main()
{

 
 int x;
 printf("1. For Fahrenheit To Celsius\n");
 printf("2. For Celsius To Fahrenheit\n");
 printf("\n\nEnter Your Choice\n");
 
 scanf("%d",&x);
 function(x);

 return 0;
}

