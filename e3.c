#include <stdio.h>

void analyzetemp(float temp) {
	 if (temp > 35)
        printf("HEAT ALERT\n");
    else if (temp < 10)
        printf("COLD ALERT\n");
    else if (temp >= 15 && temp <= 25)
        printf("COMFORT ZONE\n");
    else
        printf("NORMAL CONDITIONS\n");
}

int main () {
	
	float temperature;
	
	printf("Enter current room temperature in Celsius: ");
    scanf("%f", &temperature);

    analyzetemp(temperature);
	
	return 0;
}
