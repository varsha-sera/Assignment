#include<stdio.h>
#include<string.h>
void Abbreviated(char[],char[],char[]);
void Abbreviated(char fname[],char mname[],char lname[])
{   
     puts(fname);
     puts(mname);
     puts(lname);
}
int main()
{
	char fname[10],mname[10],lname[10];
	printf("Enter Full name(first middle last):");
	fgets(fname,10,stdin);
	fgets(mname,10,stdin);
	fgets(lname,10,stdin);
	Abbreviated(fname,mname,lname);
	return 0;
}
