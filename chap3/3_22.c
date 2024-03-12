#include <stdio.h>

int main (void){
	int a_number = 0;
	int counter = 2;

		printf("%s","Enter a positive whole number: ");
		scanf("%d", &a_number);

		if(a_number % 2){
			printf("%d %s",a_number, "is not prime\n");
			return 0;
		}	

		while (counter < a_number){
			if (a_number % counter == 0){
				printf("%d %s",a_number, "is not prime\n");
				return 0;
			} else if (a_number % counter != 0){
				counter++;
			} 
			if (counter == (a_number - 1)){
				printf("%d %s",a_number, "is prime\n");
			}
		}
		return 0;
}
