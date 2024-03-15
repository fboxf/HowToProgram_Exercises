/* print highest of 10 input, non negtaive values
 * (negatives ignored) */
#include <stdio.h>

int main (void){
	int count = 0;
	int number;
	int largest = 0;

	while (count < 10 ){
		printf("Please enter a non-negative number: ");
		scanf("%d", &number);
		if (number > largest){
			largest = number;
		}
		if (number > 0){
			count++;
		}
	}

	printf("%d",largest);

	return 0;
}
