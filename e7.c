#include <stdio.h>
float pricing(int days, float distance){

float base_rate;

base_rate = days * 40;

float dist;
dist = days * 100;
    float extra_mileage= 0;

    if (distance > dist)
        extra_mileage = (distance - dist) * 0.25;

    float total;
	total = base_rate + extra_mileage;


if (days >= 7)
	total = total * 0.90;  

    return total;
}

int main () {
	
	int days;
	float distance;
	
	printf("Enter the rental days: \n");
	scanf("%d", &days);
	
	printf("Enter the kilometres driven: \n");
	scanf("%f", &distance);
	
    float final_cost = pricing(days, distance);
    printf("The final rental cost is $%.2f\n", final_cost);

	return 0;
}
