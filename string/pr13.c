#include<stdio.h>
#include<string.h>
void stringreverse(char *s)
{
	int i,n,temp;
	
	n = strlen(s);
	
	for(i=0;i<n/2;i++)
	{
		temp = s[i];
		s[i] = s[n-i-1];
		s[n-i-1] = temp;
	}
}
int main()
{
	char s[1000];
	printf("Enter the string:");
	gets(s);
	printf("Before revers = %s \n",s);
	stringreverse(s);
	printf("After revers = %s \n",s);
	return 0;
}
