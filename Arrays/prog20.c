#include<stdio.h>
#define MAX_SIZE 100
int main()
{
	int a[MAX_SIZE];
	int n,i,pos;
	printf("Enter size of elements :\n");
	scanf("%d",&n);
	printf("Enter elements:\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
    }
	printf("Enter position for deletion:\n");
	scanf("%d",&pos);
	for(i=pos-1;i<n-1;i++)
	{
		a[i] = a[i+1];
	}
	n--;
	printf("After deletion :\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
