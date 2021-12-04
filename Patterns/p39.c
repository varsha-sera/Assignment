#include<stdio.h>
void pattern();
void pattern(){
    int i,j;
for(i=1;i<=3;i++)
			{
				for(j=1;j<=5;j++)
				{
					if(i==1&&(j==1||j==5)||i==2&&(j==2||j==4)||(i==3&&j==3))
					  printf("*");
					else
					  printf(" ");
				}
				printf("\n");
			}
}
int main()
{
    pattern();
    return 0;
}
