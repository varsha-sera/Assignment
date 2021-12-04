#include<stdio.h>
void pattern();
void pattern(){
    int i,j;
    for(i=1; i<=8; i++){
            for(j=1; j<=3; j++){
                if (j==2&&i==3||i==2&&j==1||i==2&&j==3||i==3&&j==2||j==2&&i>=5&&i<=8||i==1&&j==2)
                    printf("* ");    
                else
                printf("  ");
                
            }
            printf("\n");
        }                 
}
int main()
{
    pattern();
    return 0;
}
