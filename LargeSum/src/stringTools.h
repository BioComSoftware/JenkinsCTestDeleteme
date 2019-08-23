
#include <limits.h>
#define ULLONG_MAX 18446744073709551615ULL

unsigned long long int textTouint(char *text){
	unsigned long long int number=0;
	int stringlength = (strlen(text) - 1);
	for (int num = 0; num<stringlength; num++) {
		int digit = text[num] - '0';
        number=(number*10);
        number += digit;
    }
    return number;
}

int printString(char *s) {
	int stringlength;
	stringlength = (strlen(s) - 1);
	printf("printString(%d):", stringlength);

	for (int c = 0; c<stringlength; c++){
		printf("%c", s[c]);
	}
	printf("\n");
	return 0;
}
