#include<stdio.h>
void leftrotate(int arr[],int n,int num)
{
	int i;
	for(i=0;i<num;i++){
	int j,first;
	first=arr[0];
	for(j=0;j<n-1;j++)
	arr[j]=arr[j+1];
	arr[j]=first;	
	}
	printf("Array after left rotation\n");
	for(i=0;i<n;i++)
	printf("%d\n",arr[i]);
}
int main(){
	int arr[20],i,n,num;
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	printf("Enter the array of element:\n");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
	printf("Array of element is %d\n",arr[i]);
	printf("Enter the no of terms an array should be rotate:\n");
	scanf("%d",&num);
	leftrotate(arr,n,num);

return 0;
}
