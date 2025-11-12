#include <stdio.h>

float marks(float subj1, float subj2, float subj3)
{
	float average;
	average = (subj1 + subj2 + subj3) / 3;
	
	if(average >= 50 && subj1 >= 40 && subj2 >= 40 && subj3 >= 40) {
		printf("PASS\n");
		
	}
	else {
		printf("FAIL\n");
		
		if(average <= 50){
			printf("Failed because average is below 50\n");
		}
			
			if(subj1 <= 40 && subj2 <= 40 && subj3 <= 40) {
				printf("Failed because one or more subject marks are less than 40\n");
				
			}
	}
	return average;
	}

    int main () {
    	float subj1, subj2, subj3;
    	
    printf("Enter the marks for three subjects: ");
    scanf("%f %f %f", &subj1, &subj2, &subj3);
    
    float average = marks(subj1, subj2, subj3);
    printf("Average = %.2f\n", average);
    
    return 0;
	}
