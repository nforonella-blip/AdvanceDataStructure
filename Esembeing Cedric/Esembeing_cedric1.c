#include <stdio.h>
int main(){
	float total_price, final_amount;
	printf("enter the total price of items: ");
	scanf("%f", &total_price);
	if(total_price>10000){
		final_amount=total_price * 0.9; //apply 10% discount
	}else{
		final_amount=total_price; //No discount
	}
	printf("the final amount after discount is: %.2f\n", final_amount);
	return 0;
	}
	
