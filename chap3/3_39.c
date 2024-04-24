#include <stdio.h>

int main (void){
	for (size_t i = 0; i < 8; i++){
		if (i % 2 != 0){
			printf(" ");
		}
		printf("* * * * * * * *\n");
	}

	return 0;
}
