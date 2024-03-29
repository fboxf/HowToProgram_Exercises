#include <stdio.h>

int main (void){
	int count = 0;
	int number;
	int largest = 0;
	int next_largest = 0;

	printf("Please enter 10 non-negative numbers: ");
	scanf("%d",&number);
	if (number > largest){
		next_largest = largest;
		largest = number;
	}
	count++;

	while (count < 10 ){
		scanf("%d",&number);
		if (number > largest){
			next_largest = largest;
			largest = number;
		}
		count++;
	}

	printf("The largest number is %d\n",largest);
	printf("The next largest is %d\n", next_largest);

	return 0;
}
