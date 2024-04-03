/* square of asterisks */
#include <stdio.h>

int main (void){
	printf("*Square of asterisks*\n");
	printf("%s", "Please enter integer 1 to 20: ");
	
	int number;
	scanf("%d", &number);

	for (size_t i = 0; i < number; i++){
		for (size_t j = 0; j < number; j++){
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
