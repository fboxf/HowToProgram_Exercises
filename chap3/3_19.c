/**************************************************
 * Description:	 Interest Calculator
 *
 * 1. Consider the variables required
 * 	1.1 principal
 * 		interest_rate
 * 		term_of_loan_in_days
 * 		charge
 * 		1.1.1 set values to 0
 * 2. User Input
 * 	2.1 ( Input / scanf ) * 3
 * 		2.1.1 While principal is NOT -1
 * 			2.1.1.1 Break from loop if principal == -1
 * 					use break;
 * 3. Calculate interest payable
 * 	3.1 interest = principal * rate * days / 365
 * 4. Display Output
 * *************************************************/
#include <stdio.h>

int main (void){
	double principal = 0;
	double interest_rate = 0;
	int term_of_loan_in_days = 0;
	double charge;

	while (principal != -1){
		printf("%s: ","Enter loan principal (-1 to end)");
		scanf("%lf",&principal);

		if (principal == -1){
			break;
		}

		printf("%s: ","Enter interest rate");
		scanf("%lf",&interest_rate);

		printf("%s: ","Enter term of the loan in days");
		scanf("%d",&term_of_loan_in_days);

		charge = principal * interest_rate * term_of_loan_in_days / 365;
		printf("%s $%.2lf\n\n", "The interest charge is ",charge);
	}
	return 0;
}
