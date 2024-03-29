#include <stdio.h>

int main (void){
	int N = 7;

	while (N < 36){
		if (N == 7){
			printf("%s","N\tN+3\tN+6\tN*9\n\n");
			printf("%d\t%d\t%d\t%d\n", N, N + 3, N + 6, N * 9);
		} else {
			printf("%d\t%d\t%d\t%d\n", N, N + 3, N * 6, N * 9);
		}
		N += 7;
	}	
	return 0;
}
