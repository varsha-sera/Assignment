#include<stdio.h>
void pattern1();
void pattern1(){
    int i,j;
    for(i=1; i<=9; i++){
        for(j=1; j<=5; j++){
            if(j==1||i==j||i+j==10)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
}
int main()
{
    pattern1();
    return 0;
}
