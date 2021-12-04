#include <string.h>
 
int main()
{
    char s[1000];  
    int i;
 
    printf("Enter  the string : ");
    gets(s);
    
    for(i=0;s[i];i++)  
    {
        if(s[i]>='A' && s[i]<='Z')
         s[i]+=32;
        else if(s[i]>='a' && s[i]<='z')
         s[i]-=32;
 	}
 	
    printf("string in togglecase ='%s'\n",s);
    return 0;
}
