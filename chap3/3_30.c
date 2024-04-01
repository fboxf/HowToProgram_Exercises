/* Dangling else problem */
#include <stdio.h>

int main (void){
	int x = 9;
	int y = 11;


	printf("%s", "Part a) x = 9 and y = 11\n");
	if (x < 10)
	if (y > 10)
		puts("*****");
	else
		puts("#####"); // not printed
	puts("$$$$$");

	puts("");

	x = 11;
	y = 9;
	printf("%s", "Part a) x = 9 and y = 11\n");
	if (x < 10) // not true
	if (y > 10) // therefore won't run
		puts("*****");
	else
		puts("#####");
	puts("$$$$$");

	puts("");

	return	0;
}
