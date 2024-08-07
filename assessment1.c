
#include<stdio.h>
int main()
{
	int Pizza,Burger,Dosa,Idli,Quantity,Amount=0,Choose,TotalAmount=0;
	char ans,y,n;
	start : 
	
	printf("\n1.Pizza");
	printf("\t\t price = 180rs/pcs");
	printf("\n2.Burger");
	printf("\t price = 100rs/pcs");
	printf("\n3.Dosa");
	printf("\t\t price = 120rs/pcs");
	printf("\n4.Idli");
	printf("\t\t price = 50rs/pcs");
	printf("\nPlease enter your choose := ");
	scanf("%d",&Choose);
	
	
	switch(Choose)
	{
		case 1 :
			Pizza = 180;
			printf("\nyou have selected Pizza");
			printf("\nEnter the quantity := ");
			scanf("%d",&Quantity);
			Amount = Pizza*Quantity;
			printf("\nAmount = %d",Amount);
			TotalAmount=TotalAmount+Amount;
			printf("\nTotalAmount = %d",TotalAmount);
		break;
		case 2 :
			Burger = 100;
			printf("\nyou have selected Burger");
			printf("\nEnter the quantity := ");
			scanf("%d",&Quantity);
			Amount =(Burger*Quantity);
			printf("\nAmount = %d",Amount);
			TotalAmount=TotalAmount+Amount;
			printf("\nTotalAmount = %d",TotalAmount);
		break;
		case 3 :
			Dosa = 120;
			printf("\nyou have selected Dosa");
			printf("\nEnter the quantity := ");
			scanf("%d",&Quantity);
			Amount =Dosa*Quantity;
			printf("\nAmount = %d",Amount);
			TotalAmount=TotalAmount+Amount;
			printf("\nTotalAmount = %d",TotalAmount);
		break;
		case 4 :
			Idli = 50;
			printf("\nyou have selected Idli");
			printf("\nEnter the quantity := ");
			scanf("%d",&Quantity);
			Amount =Idli*Quantity;
			printf("\nAmount = %d",Amount);
			TotalAmount=TotalAmount+Amount;
			printf("\nTotalAmount = %d",TotalAmount);
		break;
		default : printf("\nInvalied input");
	}
	printf("\nDo you want place more orders ? y & n : ");
	scanf(" %c",&ans);
	
	if(ans=='y')
	{
		printf("____________MUNU_____________");
		goto start;
	}
	else
	{
		if(ans=='n')
		{
			goto end;
		}
	}
	end:
	return 0;
	
}
