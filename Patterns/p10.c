#include<stdio.h>
void pattern1();
void pattern1(){
    int i,j;
    for(i=1; i<=5; i++){
        for(j=1; j<=5; j++){
            if(i==5||j==1||j==i)
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
