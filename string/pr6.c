#include<string.h>
#include<stdio.h>
int main()
{
	char str1[20];
	char str2[20];
	int value;
	printf("Enter first string :\n");
	scanf("%s",&str1);
	printf("Enter second string :\n");
	scanf("%s",&str2);
	value = strcmp(str1,str2);
	if(value ==0)
	  printf("String are same");
	else
	  printf("String are not same");
	return 0;
}
