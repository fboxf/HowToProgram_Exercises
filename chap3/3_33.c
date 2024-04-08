/* square of asterisks */
#include <stdio.h>

int main (void){
	printf("*Square of asterisks*\n");
	printf("%s", "Please enter integer 1 to 20: ");
	
	int number;
	scanf("%d", &number);
	int counter = 0;
	int topLine = 0; 
	
	int middleLine = 0;

	int bottomLine = 0;

	while (counter == 0 || counter == (number - 1)){
		while (topLine < number){
			printf("*");
			topLine++;
		}

		printf("\n");

		for (size_t i = 0; i < number - 2; i++){
			for (size_t j = 0; j < number; j++){
				if (j == 0){
					printf("*");
					continue;
				} 
				
				if (j == number - 1){
					printf("*\n");
					continue;
				} 
				
				if (j != 0 || j != number - 1) {
					printf(" ");
					continue;
				}
			}
		}


		while (bottomLine < number){
			printf("*");
			bottomLine++;
		}
		printf("\n");
		counter++;
	}

	return 0;
}
