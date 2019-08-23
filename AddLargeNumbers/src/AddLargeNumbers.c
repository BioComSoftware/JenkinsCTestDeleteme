/*
 ============================================================================
 Name        : AddLargeNumbers.c
 Author      : rightmirem
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "../../c-library/include/addViaStrings.h"

int main(void) {
	//	s[0] = 72; s[1] = 101; s[2] = 108; s[3] = 108; s[4] = 111; s[5] = 32; s[6] = 87; s[7] = 111; s[8] = 114; s[9] = 108; s[10] = 100; s[11] = 0;

	char s1[] = "12345678901234567890123456789012345678901234567890";
	char s2[] = "99999999999999999999999999999999999999999999999999";
	char *sum = addIntsAsStrings(&s1, &s2);
	printf("main.sum = %s\n", sum);

	char s3[] = "14073748835532";
	char s4[] = "14073748835532";
	sum = addIntsAsStrings(&s3, &s4);
	printf("main.sum = %s\n", sum);

}
