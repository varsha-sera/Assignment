#include<stdio.h>
void sizeofdatatype();
void sizeofdatatype()
{
    printf("Size of int :%zu bytes\n",sizeof(int));
	printf("Size of float :%zu bytes\n",sizeof(float));
	printf("Size of double :%zu bytes\n",sizeof(double));
	printf("size of char :%zu bytes\n",sizeof(char));	
}
int main()
{
	int inttype;
	float floattype;
	double doubletype;
	char chartype;
	sizeofdatatype();
	return 0;
}
