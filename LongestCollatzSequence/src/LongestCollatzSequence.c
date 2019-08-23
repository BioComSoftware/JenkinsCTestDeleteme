/*
 ============================================================================
 Name        : LongestCollatzSequence.c
 Author      : rightmirem
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int count = 1;
	int longestStartingNum = 0;
	int longestCount = 0;
	long long num = 0;
	int i;
//13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
	for (i = 999999; i > 1; i--) {
		num = i;
		while (num > 1) {
			if (num%2 == 0){ num /= 2; }
			else {num = (num*3+1); }
			count += 1;
//			printf("(%d)%d\n", count, num);
		}
		if (count > longestCount) {
			longestCount = count;
			longestStartingNum = i;
		}
		printf("%d = %d terms\n", i, count);
		count = 1;
	}
	printf("Longest Count %d:%d\n", longestStartingNum, longestCount);
}
