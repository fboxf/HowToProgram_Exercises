/* counting 9's */
#include <stdio.h>

int main (void){
	int my_integer = 0;
	int how_many_nines = 0;

	printf("Enter an integer 5 digits or less:");
	scanf("%d",&my_integer);

	while (my_integer > 99999){
		printf("Enter an integer 5 digits or less:");
		scanf("%d",&my_integer);
	}

	while (my_integer > 1){
		if (my_integer % 10 == 9){
			how_many_nines++;
		}
		my_integer /= 10;
	}

	if (how_many_nines > 1){
		printf("There are %d nines.\n", how_many_nines);
	} else if (how_many_nines == 1){
		printf("There is 1 nine.\n");
	}

	return 0;
}
