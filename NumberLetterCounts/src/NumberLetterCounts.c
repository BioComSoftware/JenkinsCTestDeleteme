/*
 ============================================================================
 Name        : NumberLetterCounts.c
 Author      : rightmirem
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define False 0
#define True !False

char[] testfunc(char[] i);

int main(void) {
	char j[] = 'ABCD';
	printf("before: %s", j);
	j = testfunc(j);
	printf("after: %s", j);
	return EXIT_SUCCESS;
}

char[] testfunc(char[] i){
	for (k=0; k<strlen(i); k++){
		i[k] += 1;
	}
	return i;
}

