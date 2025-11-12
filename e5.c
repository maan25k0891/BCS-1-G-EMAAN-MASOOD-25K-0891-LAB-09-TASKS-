#include <stdio.h>
float bill(float food_cost, int people){
	float tax;
	tax = 0.08 * food_cost;
    float tip;
	
	if (food_cost > 50)
        tip = 0.15 * food_cost;
    else
        tip = 0.10 * food_cost;
	
	float service_charge = 0;
    if (people > 6)
    service_charge = 0.05 * food_cost;
        
    float total_cost;
	total_cost = food_cost + tax + tip + service_charge;
    return total_cost;
	
}

int main () {
	
	float food_cost;
    int people;
	
	printf("Enter the food cost: \n");
	scanf("%f", &food_cost);
	
	printf("Enter the number of people: \n");
	scanf("%d", &people);
	
	float total;
	total = bill(food_cost, people);
    printf("Total Bill = $%.2f\n", total);
    
    return 0;
}
