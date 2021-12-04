#include<stdio.h>
void rightrotate(int arr[],int n,int num)
{
	int i;
	for(i=0;i<num;i++){
	int j,last;
	last=arr[n-1];
	for(j=n-1;j>0;j--)
	arr[j]=arr[j-1];
	arr[0]=last;	
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
	printf("element of array is %d\n",arr[i]);
	printf("Enter the no of terms an array should be rotate:\n");
	scanf("%d",&num);
	rightrotate(arr,n,num);



return 0;
}
