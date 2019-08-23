/*
 ============================================================================
 Name        : PowerDigitSum.c
 Author      : rightmirem
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "../../c-library/include/addViaStrings.h"

#define ULLONG_MAX 18446744073709551615ULL

int main(void) {
	int p = 1000;
	char *sum;
	sum = "2";

	for(int i=0; i<(p - 1); i++) { // (p - 1) because 2**1 already set
		sum = addIntsAsStrings(sum, sum);
	}

	unsigned long long total = 0;
	for ( int i = 0; i < strlen(sum); i++){
		printf("%c", sum[i]);
		total += (sum[i] - '0');
	}

	printf("\nTotal = %d\n", total);

	free (sum);
	return 0;
}
