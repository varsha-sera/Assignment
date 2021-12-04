#include<stdio.h>
void sumofnumbers(int);
void sumofnumbers(int n)
{
	int i, sum = 0;
	 i = 1;
	 do{
        sum += i;      // sum = sum + i;
        ++i;
    }while (i <= n);
    printf("Sum = %d", sum);
}
int main()
{
    int n;
    printf("Enter a positive number :\n");
    scanf("%d",&n);
    sumofnumbers(n);
    return 0;
}
