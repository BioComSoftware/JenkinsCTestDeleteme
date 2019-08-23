#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char* addIntsAsStrings(char *s1, char *s2);
char* leftPad(char *s, int arrayLen);
int   findMaxLength(char *s1, char *s2);

//int addNumericStrings(const char * s1, const char * s2, char sum[], size_t siz)
//{
//    unsigned char digit  = 0;
//    unsigned char carry = 0;
//    int len1 = strlen(s1);
//    int len2 = strlen(s2);
//    int i = 0, j = 0;
//    int k = siz-1;  // we need 1 char for the terminating zero char
//
//    // init sum string
//    memset(sum, 0, siz);
//    for (i = len1-1, j = len2-1; i >= 0 || j >= 0; --i, --j)
//    {
//        unsigned char a1 = 0;
//        unsigned char a2 = 0;
//        if (k <= 0)
//            return -3;   // siz too small
//        if (i >= 0)
//        {
//            a1 = (unsigned char)(s1[i] - '0');
//            if (a1 > 9)
//                return -1;
//        }
//        if (j >= 0)
//        {
//            a2 = (unsigned char)(s2[j] - '0');
//            if (a2> 9)
//                return -2;
//        }
//        digit = (a1+a2+carry);
//        carry =  (digit >= 10)? 1 : 0;
//        sum[--k] = (digit %10) + '0';
//    }
//    if (carry)
//    {
//        if (k <= 0)
//            return -3;                    // siz too small
//        sum[--k] = '1';
//    }
//    if (k > 0)
//    {
//        memmove(&sum[0], &sum[k], siz-k);
//    }
//    return 0;   // means success in c
//}

char* addIntsAsStrings(char *s1, char *s2){
	// Find the length of the greater of the two
	int length1 = strlen(s1);
	int length2 = strlen(s2);
	int addendDigits;
	(length1 > length2) ? (addendDigits = length1) : (addendDigits = length2);

	// We need separate strings of so they can be buffered with zeros
	// Create the string for the addends and buffer with zeros.
	char addend1[addendDigits + 1];
	char addend2[addendDigits + 1];
	for (int i = 0; i < (addendDigits) ; i++){ // "<" not "<="
		addend1[i] = '0'; // buffer w/ 0s
		addend2[i] = '0'; // buffer w/ 0s
	} // buffer w/ 0s
	addend1[addendDigits] = '\0'; // terminate

	// put s1 and s2 into buffered addends strings
	int s1_index = (strlen(s1) - 1);
	int s2_index = (strlen(s2) - 1);
	for (int i = (addendDigits - 1); i >= 0; i--){ //Start at back of addend
		if ( s1_index >= 0) { addend1[i] = s1[s1_index]; }
		if ( s2_index >= 0) { addend2[i] = s2[s2_index]; }
		s1_index -= 1;
		s2_index -= 1;
	}

	// Allocate sum pointer. The sum pointer needs to be ONE char
	//  longer than the addends, in the event that the addends need
	//  to carry a final one to the front. I.e. 999 + 999 = 1998
	int sumDigits = addendDigits + 1;
	char *sum = (char *) malloc(sizeof(char) * (sumDigits + 1) ); // +1 To include termination byte, AND an extra char at the front
	for (int i = 0; i < (sumDigits) ; i++){ // "<" not "<="
		sum[i] = '0'; // buffer w/ 0s
	}
	sum[sumDigits] = '\0';

    // Manual addition vars
    int a1, a2, total;
	int carry = 0;

	// Run the manual addition
	// Start adding individual ints from end (right side)
	for (int j = addendDigits - 1; j >= 0; j--) {
		a1 = addend1[j] - '0'; // Convert to int
		a2 = addend2[j] - '0'; // Convert to int
		total = (a1 + a2 + carry);
		carry = 0;
		if ( total >= 10){
			carry += 1;
			total -= 10;
		}
		// convert to ascii value for numbers (adding 48)
		sum[j + 1] = '0'+total; // sum[j + 1] because `sum`is always one index larger than the addends
	}
	sum[0] = '0' + carry; // add last carry to start of num always, even if 0

	// Before returning, truncate leading zeros
	char *returnsum = (char *) malloc(sizeof(char) * (strlen(sum) + 1) );
    int sum_i = 0;
    int returnsm_i = 0;
    int truncate = 1; // true
	while (1){
		// if order is important here
		if (sum[sum_i] == '\0') { break; } // we're done
		if (sum[sum_i] == '0' && truncate == 1) { sum_i += 1; continue; } // 1 is true
		// if a num, Stop truncating 0s but DO continue adding numbers
		if (sum[sum_i] != '0') { truncate = 0; } // 0 is false
		returnsum[returnsm_i] = sum[sum_i];
		returnsm_i += 1;
		sum_i += 1;
	}
	return returnsum;
}

char* leftPad(char *s, int arrayLen){
	puts("Function: 'leftPad' not yet implemented");
}

int findMaxLength(char *s1, char *s2){
	puts("Function: 'findMaxLength' not yet implemented");
}

