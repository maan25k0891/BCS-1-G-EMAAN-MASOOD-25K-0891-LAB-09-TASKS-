#include <stdio.h>

float shipping(float order_amount, float package_weight){
float shipping_cost = 0;

if (order_amount > 100) {
	printf("Free shipping! \n");
	return order_amount;
}

else {
	if(package_weight < 2){
		return order_amount + 10;
	}
	if(package_weight >= 2 && package_weight <= 5){
		return order_amount + 15;
	}
	if(package_weight > 5) {
		return order_amount + 20;
	}
}
}

int main () {
float weight, amount, total_cost;

	
printf("Enter the order amount: \n");
scanf("%f", &amount);

printf("Enter the weight of the package: \n");
scanf("%f", &weight);

total_cost = shipping(amount, weight);
printf("Total Cost = $%.2f\n", total_cost);

return 0;
}
