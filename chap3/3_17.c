/* mortgage calculator
 * 
 * Calculate the interest accrued on a bank
 * customer's mortgage. We know
 * 	- mortgage amount
 * 	- mortgage term
 * 	- interest rate
 *
 * 	INPUTS:	each of the above
 * 	Output:	total interest payable 
 *
 * 	1. Get 	- mortageAmount
 * 			- mortgageTerm (years)
 * 			- interestRate
 * 				- interestRate = interestRate / 100
 * 		1.1 scanf x 3
 * 	2. Calculate totalInterestPayable
 * 		2.1 mortgageTerm * interestRate = totalInterestPayable
 * 	3. Add this to mortgageAmount = totalAmountPayable
 * 		3.1 totalAmountPayable = mortageAmount + totalInterestPayable
 * 	4. Calculate required monthlyPayment (totalAmountPayable / monthsInTerm)
 * 		4.1 monthsInTerm = years * 12;
 * 		4.2 monthlyPayment = totalInterestPayable / monthsInTerm
 * 	5. Display required monthlyPayment
 * 	6. Repeats until sentinel figure is entered*/
#include <stdio.h>

int main (void){
	double mortgageAmount, 
		   interestRate,
		   totalInterestPayable,
		   totalAmountPayable,
		   monthlyPayment;
			
	int mortgageTerm, monthsInTerm;

	while (mortgageAmount != -1){
		printf("%s", "Enter mortgage amount in dollars (-1 to quit): ");
		scanf("%lf", &mortgageAmount); //1000

		if (mortgageAmount == -1){
			printf("%s\n","Program Terminated.");
			return 0;
		}
		
		printf("%s", "Enter mortgage term (in years): ");
		scanf("%d", &mortgageTerm); //1
		printf("%s", "Enter interest rate: ");
		scanf("%lf", &interestRate); //10%

		interestRate = (interestRate / 100); // 1.1
		totalInterestPayable = mortgageAmount * interestRate; // 1000 * 1.1 = 1100  
		totalAmountPayable = mortgageAmount + totalInterestPayable; //1

		monthsInTerm = mortgageTerm * 12;
		monthlyPayment = (totalAmountPayable / monthsInTerm);

		printf("%s $%.2lf\n","The monthly Payable Interest is: ", monthlyPayment);
	}
	return 0;
}
