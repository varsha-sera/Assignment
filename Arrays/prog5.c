#include<stdio.h>
int deletelement(int arr[],int n,int pos,int ele)
{
	int i;
	if(pos<0 || pos >n)
	printf("Invalid position\n ");
	else
	{
	for(i=pos-1;i<=n-1;i++)
	arr[i]=arr[i+1];
	}
	n--;
	return n;

}
int main(){
	int arr[20],i,n,ele,pos,result;
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	printf("Enter the array of element:\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	}
	printf("array element:\n");
	for(i=0;i<n;i++)
	printf("%d\n",arr[i]);
	printf("Enter the position you want to element:\n");
	scanf("%d",&pos);
	printf("Enter the element you want to delete:");
	scanf("%d",&ele);
	result=deletelement(arr,n,pos,ele);
	for(i=0;i<result;i++)
	printf("%d\n",arr[i]);


return 0;
}
