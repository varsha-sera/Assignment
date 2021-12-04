#include <stdio.h>

void pattern1();
void pattern1()
{
    int i, j;
    for (i = 1; i <= 8; i++)
    {
        for (j = 1; j <= 15; j++)
        {
            if ((j == 1 && i >= 1 && i <= 8) || (i == 1 && j >= 1 && j <= 15) || (i == 4 && j >= 1 && j <= 10))
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
