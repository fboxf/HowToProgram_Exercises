/**************************************************
 * Description:	Sales Tax
 * Inputs:		Enter total tax amount
 * 				Enter Month
 * Outputs:		Total Collections
 * 				State Tax 		(4% of collections)
 * 				Counties Tax 	(5% of collections)
 * 				Total Tax collected
 *
 * 1. print requirements to user
 * 2. Initialise variables
 * 		2.0 #define STATE_TAX_AMOUNT 1.04 / COUNTIES_TAX_AMOUNT 1.05
 * 		2.1 double totalCollections
 * 		2.2 char month[10];
 * 		2.25 double sales;
 * 		2.3 double stateTax
 * 		2.4 double countiesTax
 * 		2.5 double totalSalesTax
 * 3. Ask user to input data
 * 		3.1 scanf("%d", &totalCollections);
 * 		3.2 month("%10s", month);
 * 		3.3 Check totalCollections for sentinel value (-1)
 * 			3.3.1 if totalCollections = -1 --> Quit
 * 4. Calculate Tax
 * 		4.1 stateTax = (totalCollections * 1.04) - totalCollections;
 * 		4.2 countiesTax = (totalCollections * 1.05) - totalCollections;
 * 		4.3 totalSalesTax = stateTax + countiesTax;
 * *************************************************/
#include <stdio.h>
#include <stdlib.h>
#define STATE_TAX_AMOUNT 0.04
#define COUNTIES_TAX_AMOUNT 0.05

int main (void){
	double totalCollections;
	char month[10];
	double stateTax, countiesTax, totalSalesTax, totalSales;

	while (totalCollections != -1){
		printf("%s","Enter total amount collected (-1 to quit) ");
		scanf("%lf", &totalCollections);
		if (totalCollections == -1){
			exit(EXIT_SUCCESS);
		}
		printf("%s", "Enter name of month ");
		scanf("%9s", month);


		printf("%s $%f\n", "Total Collections", totalCollections);

		totalSales = (totalCollections / (1 + (STATE_TAX_AMOUNT + COUNTIES_TAX_AMOUNT)));
		printf("%s $%.2f\n", "Sales", totalSales);

		countiesTax = (totalSales * (1 + COUNTIES_TAX_AMOUNT) - totalSales);
		stateTax = (totalSales * (1 + STATE_TAX_AMOUNT) - totalSales);
		totalSalesTax = stateTax + countiesTax;

		printf("%s $%.2f\n", "Counties Sales Tax", countiesTax);
		printf("%s $%.2f\n", "State Sales Tax", stateTax);
		printf("%s $%.2f\n\n", "Total Sales Tax Collected", totalSalesTax);
	}
	return 0;
}
