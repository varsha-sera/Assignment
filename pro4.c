#include<stdio.h>
 
void charcter(char);
void charcter(char c)
{
printf("%d",c);
}
int main()
{
	char ch;
		printf("Enter Ascii value of chacter:");
		scanf("%c",&ch);
		charcter(ch);
	return 0;
}
