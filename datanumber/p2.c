#include<stdio.h>
void pattern(int);
void pattern(int n)
{
  int i ,j ;
  for(i=1;i<=n;i++)
	{
		for(j=i;j<n;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			if(j==1 || i==n||j==i)
			{
			    printf("%d ",j);
		    }
			else
			{
	            printf("  ");
	        }
		}
	    
     	printf("\n");
}		
}
int main()
{
	int n;
	printf("Enter no :\n");
	scanf("%d",&n);
	pattern(n);
	return 0;
}
