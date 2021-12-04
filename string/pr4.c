#include<stdio.h>
#include<string.h>
 void copys(char);
 void copys(char *str1)
 {
 	char str2;
    strcpy(str2,str1);
    printf("Copied String(str2) is %s",str2);	
 }
int main()
{
    char str1[100],str2[50];
     
    printf("Enter string str1\n");
    gets(str1);
    
    copys(str1);
    reurn 0;
}
