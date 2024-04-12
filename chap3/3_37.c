/* Detecting multiples of a number */
#include <stdio.h>

int main (void){
	int counter = 1;

	while (counter < 501){
		printf("$ ");
		if (counter % 50 == 0 ){
			printf("\n");
		}
		counter++;
	}
	return 0;
}
