/* Armstrong numbers - write a program ti display all three 
 * digit Armstrong numbers */
#include <stdio.h>
#include <math.h>

int main (void){
	int number_being_tested = 100;
	int first_digit, second_digit, third_digit;

	while (number_being_tested < 1000){
		first_digit = number_being_tested % 10;
		second_digit = (number_being_tested / 10) % 10;
		third_digit = (number_being_tested / 100) % 10;

		first_digit = pow(first_digit,3);
		second_digit = pow(second_digit,3);
		third_digit = pow(third_digit,3);

		if (number_being_tested == first_digit + second_digit + third_digit){
			printf("Armstrong Number: %d\n", number_being_tested);
		}	   

		number_being_tested++;
	}

	return 0;
}
