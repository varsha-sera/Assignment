#include<stdio.h>
void pattern1();
void pattern1(){
    int i,j;
    for(i=1; i<=5; i++){
        for(j=1; j<=5; j++){
            if(i==5||j==5||i+j==6||i==j||i==1||j==1)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
}
int main()
{
    pattern1();
    return 0;
}
