#include<stdio.h>
void palindrome(int);
void palindrome(int n)
{
   int sum=0,temp=n,rem;
    while(n>0)
    {
	rem=n%10;
    sum=sum*10+rem;
    n=n/10;
    }
    if (sum==temp)
      printf("palindrome\n");
    else
      printf("Not Palindrome\n");
}
 void main()
 {
    int n;
    printf("enter the number :\n");
    scanf("%d",&n);
    palindrome(n);
    return 0;
 }
