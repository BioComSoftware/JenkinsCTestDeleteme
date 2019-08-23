#include <stdbool.h>
#include <stdlib.h>

bool isItemInIntArray(int value, int *arr){
//	printf("(sizeof(arr)) =%d\n", sizeof(arr));
//	printf("sizeof(arr[0]) = %d\n", sizeof(arr[0]));
//	for( int i = 1; i <= 501; i++) {
	for( size_t i = 1; i <= (sizeof(arr)) / sizeof(arr[0]); i++) {
		printf("Checking %d against array value %d\n", value, arr[i] );
		if (value == arr[i]) { return true; }
	}
	return false;
}

bool isIntInArray(int value, int *arr, int size){
	for( int i = 1; i <= size; i++) {
//		printf("Checking %d against array value %d\n", value, arr[i] );
		if (value == arr[i]) { return true; }
	}
	return false;
}
