/* Floyd's Triangle
 * *
 * **
 * ***
 * ****
 * ..
 * ..
 * ..
 * ********** */
#include <stdio.h>

int main (void){
	int triangle_count = 10;
	int counter = 0;
	int next = counter;

	while (triangle_count > 0){
		next = counter + 1;
		while (next > 0){
			printf("*");
			next--;
		}
		printf("\n");

		triangle_count--;
		counter++;
	}
	return 0;
}
