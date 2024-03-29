/* tabular output
 * write a program that uses looping to print the 
 * following table of values. Use the tab escape sequence \t in the
 * printf statement to separate the collumns with tabs*/
#include <stdio.h>

int main (void){
	int N = 1;

	while (N < 11){
		if (N == 1){
			printf("%s","N\tN2\tN3\tN4\n\n");
			printf("%d\t%d\t%d\t%d\n", N, N * N, N * N * N,N*N*N*N);
		} else {
			printf("%d\t%d\t%d\t%d\n", N, N * N, N * N * N,N*N*N*N);
		}
		N++;
	}	
	return 0;
}
