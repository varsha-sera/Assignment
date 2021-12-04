#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void function(int,int);
void function(int day,int k)
{
	  int j,dt=1;
	for(j=k;j>0;j--)
    {
        printf("\t");
    }

    while(dt<=day)
    {
        if(k!=0)
        {
         if(k%7==0)
         printf("\n");
        }
        
  printf("%d\t",dt);
        dt++;
        k++;
    }
     printf("\nMon \tTue \tWed \tThu \tFri \tSat \tSun \n\n");
     printf(" _________________________________________________\n\n");
}
void main()
{
  //Ghanendra Yadav
    int k,day;
   
    printf("C Program to Print a Calendar With Start With Input Day\n\n");
    
    printf("Enter Total Numbers of Days in a Month : ");
    scanf("%d",&day);
    
    printf("\n\nEnter First Day Start From <0-Mon....5-Sat & 6-Sun> End With Sunday : ");
    scanf("%d",&k);
    
     function(day,k);

    return 0;

}

