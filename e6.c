#include <stdio.h>

float calc_tax(float income) {
	float tax = 0;
	
	if(income <= 20000)
	tax = 0;
	
	else if (income <= 50000)
	tax = (income - 20000) * 0.10;
	
	else 
	tax = (30000 * 0.10) + ((income - 50000) * 0.20);

    return tax;

}

int main () {
	float income, tax, net_income;
	
	printf("Enter the gross income: \n");
	scanf("%f", &income);
	
	tax = calc_tax(income);
	net_income = income - tax;
	
	printf("The tax amount is $%.2f\n", tax);
    printf("The net Income is $%.2f\n", net_income);

	return 0;
}
