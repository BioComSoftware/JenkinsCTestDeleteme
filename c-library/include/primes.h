#include <stdbool.h>

bool isPrime(int p);

int nextPrime(int lastPrime) {
	int p = lastPrime;
    while(true) {
    	p += 1;
    	if (isPrime(p) == true){ return p; }
    	// Else just continue
    }
}

bool isPrime(int p){
	for (int divisor = 2; divisor < p; divisor++) { // Do not include p itself
		if (p % divisor == 0) { return false; } // not prime
	}
		return true;
}
