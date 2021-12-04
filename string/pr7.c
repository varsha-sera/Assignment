#include <string.h>
 
void stringlowercase(char *s)
{
	int i;
 
    	for(i=0;s[i];i++)  
        {
         if(s[i] >= 97 && s[i] <= 122)
         {
           s[i] = s[i] - 32;
         }
 	    }
}
int main()
{
 
    char s[1000];  
    int i;
 
    printf("Enter  the string: ");
    gets(s);
    
 
    stringlowercase(s);
     
    printf("string in lowercase ='%s'\n",s);
    
}
