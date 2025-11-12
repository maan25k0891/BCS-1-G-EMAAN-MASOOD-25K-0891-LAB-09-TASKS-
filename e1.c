#include <stdio.h>
  
  float process(float trans_amount, float rem_limit)
  {
  	float new_limit;
  	
  	if(trans_amount <= rem_limit) {
  		new_limit = rem_limit - trans_amount;
  		printf("Transaction has been APPROVED\n");
  		return new_limit;
	  }
	  else {
	  	printf("\nTransaction has been DECLINED\n");
	  	return rem_limit;
	  }
  }
  
int main () {
	float limit;
    float amount = 0;
    
    printf("Enter the transaction amount: ");
    scanf(" %f", &amount);
    
    printf("Enter the current remaining limit: ");
    scanf(" %f", &limit);
    
    limit = process(amount, limit);
    printf("The remaining limit is: $%.2f\n", limit);

	return 0;
}
