#include<stdio.h>
void checkprofitLoss(int,int);
void checkprofitLoss(int Sellingprice,int Costprice)
{
	int Amount;
	if(Sellingprice>Costprice){
	
	Amount=Sellingprice-Costprice;
	printf("Profit =%d",Amount);
    }
    else if(Sellingprice<Costprice)
	{
	Amount=Costprice-Sellingprice;
	printf("Loss =%d",Amount);
    }    
  	else {
	printf("No Profit No Loss");
    }
}
int main()
{
	int Sellingprice,Costprice,Amount;
	printf("Enter a Cost Price : ");
	scanf("%d",&Costprice);
	
	printf("Enter a Selling Price : ");
	scanf("%d",&Sellingprice);
	
	checkprofitLoss(Sellingprice,Costprice);
	

	return 0;
}
