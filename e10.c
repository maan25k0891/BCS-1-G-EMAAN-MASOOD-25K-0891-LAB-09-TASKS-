#include <stdio.h>
int main () {
	int grid[3][4] = {
	{1, 2, 3, 4},
	{5, 6, 7, 8},
	{9, 10, 11, 12}
	
    };
    
    int *ptr = &grid[0][0];
    
    printf("Examples of elements that may be accessed :\n");
    printf("%d ", *ptr);        
    printf("%d ", *(ptr + 5)); 
    printf("%d ", *(ptr + 10));
    
    printf("\n\nAccessing elements using positive and negative indexing :\n");
    int *ptr2 = &grid[1][0];   
    printf("%d ", *ptr2);     
    printf("%d ", ptr2[-1]);   
    printf("%d ", ptr2[3]);
	
	printf("\n\nThe numbers divisible by 3 are:\n");
	int i;
    for (i = 0; i < 12; i++) {
        if (*(ptr + i) % 3 == 0)
            printf("%d ", *(ptr + i));
    }
	
	printf("\n\nAccessing the last element in a different way: \n%d\n", *(&grid[0][0] + 11));

	return 0;
}
