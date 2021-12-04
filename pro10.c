#include <stdio.h>  
void max(int,int);
void max(int num1,int num2)
{   
    int max_div, flag = 1; 
	max_div = (num1 > num2) ? num1 : num2;  
	 while (flag) 
    {  
        if (max_div % num1 == 0 && max_div % num2 == 0)  
        {  
            printf( " The LCM of %d and %d is %d. ", num1, num2, max_div);  
            break;  
        }  
        ++max_div;  
    }  
}
void main()  
{  
    int num1, num2;  
   
    printf( "Enter any two positive numbers to get the LCM \n");  
    scanf(" %d %d", &num1, &num2);  
    max(num1,num2);    
   
}  

