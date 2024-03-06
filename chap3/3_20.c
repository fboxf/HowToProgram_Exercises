/* Salary Program
 * 1. Inputs
 * 	1.1 hours worked
 * 		hourly rate of worker
 * 		1.2 variables
 * 			double hours;
 * 			double hourly_rate;
 * 			double salary;
 * 2. Calculations
 * 		2.1 if under 40 hours
 * 			salary = hours * hourly_rate;
 *		2.2 if over 40 hours
 *			salary = (40 * hourly_rate) + ((hours - 40) * (hourly_rate * 1.5));
 * 3. Outputs
 * 		3.1 printf("%s %lf\n", "Salary is ",salary);
 * 4. Loop
 * 	4.1 -1 to end 
 * 		4.1.1 while hours != -1
 * 			  loop
 * 			  4.1.2 if hours == -1
 * 			  		break;
 * 			  		*/
#include <stdio.h>

int main (void){
	double hours;
	double hourly_rate;
	double salary;

	while (hours != -1){
		printf("%s","Enter # of hours worked (-1 to end):");
		scanf("%lf",&hours);
		
		if (hours == -1){
			break;
		}

		printf("%s","Enter hourly rate of the worker ($00.00):");
		scanf("%lf",&hourly_rate);

		if (hours <= 40){
			salary = hours * hourly_rate;
		} else if (hours > 40){
			salary = (40 * hourly_rate) + ((hours - 40) * (hourly_rate * 1.5));
		}
		printf("%s $%.2lf\n", "Salary is ",salary);
	}
	return 0;
}
