/*
 ============================================================================
 Name        : HighlyDivisibleTriangularNumber.c
 Author      : rightmirem
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <math.h>
#include "factoring.h"

int main() {
	int maxFactor = 500;
	int count = 1;
	int trianglenum;

	while(1){
		trianglenum = count*(count+1)/2;
		int divisors = numDivisors(trianglenum);
		printf("Triangle Number %d has %d divisors.\n",trianglenum, divisors);
		if ( divisors >= maxFactor) { break; }
		count += 1;
	}
}

