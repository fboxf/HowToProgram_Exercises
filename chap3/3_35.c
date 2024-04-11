/* Printing the decimal equivalent of binary 
 * input a binary integer (5 or fewer) and print its decimal equivalent
 * */
#include <stdio.h>

int main (void){
	int binary_integer;
	int decimal_integer = 0;
	printf("Please enter a binary integer of 5 or fewer numbers:");
	scanf("%d",&binary_integer);

	int current_power = 1;	

	while (current_power < 32){
		decimal_integer += (binary_integer % 2) * current_power;
		binary_integer = binary_integer / 10;
		current_power = current_power * 2;	// 2 > 4 > 8 > 16
	}

	printf("%d in decimal is %d\n", binary_integer, decimal_integer);
	return 0;
}
