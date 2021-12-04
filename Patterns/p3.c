#include<stdio.h>
void pattern1();
void pattern1(){
    int i,j;
    for(i=5; i>=1; i--){
        for(j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    pattern1();
    
    return 0;
}
