#include<stdio.h>
void reversearray(int arr[],int start,int end)
{
	while(start<end)
	{
	int temp=arr[start];
	arr[start]=arr[end];
	start++;
	end--;
	}
}
int main(){
	int arr[20],i,n;
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	printf("Enter the array of element:\n");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
	printf("array of element is %d\n",arr[i]);
	
	reversearray(arr,0,n-1);
	printf("Reverse Array:\n");
	for(i=0;i<n;i++)
	printf("%d\n",arr[i]);


return 0;
}
