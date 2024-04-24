#include <stdio.h>

int main (void){
	for (size_t i = 0; i < 8; i++){
		if (i % 2 != 0){
			printf("%s"," ");
		}

		for (size_t j = 0; j < 8; j++){
			printf("%s","* ");
		}
		puts("");
	}

	return 0;
}
