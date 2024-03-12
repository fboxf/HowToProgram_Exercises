#include <stdio.h>

int main (void){
	int i = 1;

	printf("preincrement: i = %d\n", ++i);

	/* reset i to 1; */
	i = 1;
	printf("postincrement: i = %d\n", i++);
	return 0;
}
