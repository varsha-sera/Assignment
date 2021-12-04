#include<stdio.h>
void pattern(int);
void pattern(int n)
{
  int place,i,j;
  for(i=1; i< 2*n; i++)
  {
    if(i < n) place=i;
    else place = abs(2*n-i);

    for(j=1; j< 2*place; j++)
    {
      if(j%2==0) 
	     printf("*"); //stars
      else 
	     printf("%d",place);
    } //numbers

    printf("\n"); //next line
  }	
}
int main()
{
  int n;

  printf("Enter number of rows: ");
  scanf("%d",&n);
  pattern(n);
  return 0;
}
