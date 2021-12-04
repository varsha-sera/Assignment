#include<stdio.h>
void checkAlphabetorNot(char);
void checkAlphabetorNot(char ch)
{
	if((ch>='a'&& ch<='z')||(ch>='A'&& ch<='Z'))
	   printf("The enter character %c is Alphabet ",ch);
	else
	   printf("The enter character %c is not Alphabet",ch);

}
int main()
{
	char ch;
	printf("Enter any Character:\n");
	scanf("%c",&ch);
	checkAlphabetorNot(ch);
	
	return 0;
}
