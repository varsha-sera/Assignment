#include<stdio.h>
void pattern();
void pattern(){
    int i,j;
    for(i=5; i>=1; i--){
        for(j=1; j<=10; j++){
            if (j>i&&j<=10-i)
            {
                printf(" ");
            }
            else{
                printf("*");
            }
            
        }
        printf("\n");
    }
}
int main()
{
    pattern();
    return 0;
}
