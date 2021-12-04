#include<stdio.h>
void insertelement(int arr[],int n,int pos,int ele)
{
	int i;
	n++;
	for(i=n-1;i>=pos;i--){
	arr[i]=arr[i-1];
	}
	arr[pos-1]=ele;
	for(i=0;i<n;i++)
	{
	printf("%d\n",arr[i]);	
	}

}
int main(){
	int a[20],i,n,ele,pos;
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	printf("Enter the array of element:\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	printf(" element of array is %d\n",a[i]);
	printf("Enter the position you want to element:\n");
	scanf("%d",&pos);
	printf("Enter the element you want to insert");
	scanf("%d",&ele);
	insertelement(a,n,pos,ele);



return 0;
}
