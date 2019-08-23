int numDivisors(num){
	int divisor = 1;
	int divisorCount = 0;
	while ( divisor <= (int)pow(num,0.5) ) {
		if ( num % divisor == 0) { divisorCount += 2; }
		divisor += 1;
	}
	return divisorCount;
}
