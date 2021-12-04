#include<stdio.h>
#include<string.h>
int main()
{
	char line[150];
	int i;
	int vowels,consonant,digit,space;
	vowels = consonant = digit , space =0;
	printf("Enter line of string:\n");
	fgets(line,sizeof(line),stdin);
	for(i=0;line[i]!='\0';++i)
	{
		if(line[i]=='a'||line[i]=='e'||line[i]=='i'||line[i]=='o'||line[i]=='u'||line[i]=='A'||line[i]=='E'||line[i]=='I'||line[i]=='O'||line[i]=='U')
		{
			++vowels;
		}
		else if((line[i]>='a'&& line[i]<='z')||(line[i]>='A'&&line[i]<='Z'))
		{
		    ++consonant;
	    }
		else if(digit>='0'&&digit<='9')
		{
		    ++digit;
	    }
		else if(line[i]==' ')
		{
		    ++space;
	    }
		
	}
	printf("Vowels: %d",vowels);
	printf("\nConsonant : %d",consonant);
	printf("\nDigit : %d",digit);
	printf("\n White Space :%d",space);
	return 0;
}
