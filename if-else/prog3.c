#include<stdio.h>
void checkVowel(char);
void checkVowel(char ch)
{
	if(ch=='a'||ch=='i'||ch=='e'||ch=='o'||ch=='u'||ch=='A'||ch=='I'||ch=='E'||ch=='O'||ch=='U')
	 printf("\n%c is Vowel",ch);
	else
	 printf("\n%c is Consonant",ch);
}
int main()
{ 
    char ch;
    printf("Enter character:\n");
    scanf("%c",&ch);
    checkVowel(ch);
	return 0;
}
