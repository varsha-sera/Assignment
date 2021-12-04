#include<stdio.h>
void pattern();
int main()
{
    pattern();
    return 0;
}

void pattern(){
    int i,j;
for(i=1; i<=6; i++){
            for(j=1; j<=3; j++){
                if (j==1&&i>=2&&i<=5||i==1&&j>=2&&j<=3||i==6&&j>=2&&j<=3)
                    printf("* ");    
                else
                printf("  ");
                
            }
            printf("\n");
        }               
           
}