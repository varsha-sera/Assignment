#include<stdio.h>
int duplicate(int arr[],int n)
{
	if(n==0||n==1)
	return n;
	int temp[n];
	int j=0;
	int i;
	for(i=0;i<n-1;i++)
	if(arr[i]!=arr[i+1])
	temp[j++]=arr[i];
	temp[j++]=arr[n-1];
	
	 for(i=0;i<j;i++)
	 arr[i]=temp[i];
        return j;
}	
int main(){
	int arr[20],i,n,ele;
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	printf("Enter the array of element:\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	}
	printf("Array before Remove Duplicate:\n");
	for(i=0;i<n;i++)
	printf("%d\n",arr[i]);
	
	ele=duplicate(arr,n);
	printf("Array After Remove Duplicate:\n");
	for(i=0;i<ele;i++)
	printf("%d\n",arr[i]);
return 0;
}
