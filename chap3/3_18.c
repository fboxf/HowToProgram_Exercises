#include <stdio.h>
#include <stdlib.h>

int main (void){
	double gross_sales;
	printf("%s","Enter sales in dollars (-1 to end): ");
	scanf("%lf",&gross_sales);
	
	while (gross_sales != -1){
		printf("%s %lf\n","Salary is ",200 + ((gross_sales * 1.09) - gross_sales));
		printf("%s","Enter sales in dollars (-1 to end): ");
		scanf("%lf",&gross_sales);
	}

	return 0;
}
