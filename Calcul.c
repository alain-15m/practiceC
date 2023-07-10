/*
 * Calcul.c
 *
 *  Created on: Feb. 4, 2023
 *      Author: alanm
 */
#include <stdio.h>
/* rudimentary calculator, K&R, p. 158 */
int main()
{
	double sum, v;
	sum = 0;
    printf("Enter an Integer: ");
	while(scanf("%lf", &v) == 1){
		printf("\t%.2f\n", sum += v);
	}


	return 0;
}
