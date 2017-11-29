#include <cstdio>

bool candies(unsigned long long n, unsigned long long k) {
	
	// jeśli cukierków mniej niż torebek - nie da się
	if (n < k) {
		return false;
	}
	
	// minimalna ilość potrzebnych cukierków
	unsigned long long minCandies = 0;
	
	// w każdej kolejnej torebce o 1 cukierek więcej
	for (unsigned long long i = 1; i <= k; i++) {
		minCandies += i;
	}
	
	// jeśli mamy mniej cukierów niż porzeba - nie da się
	if (minCandies > n) {
		return false;
	}
	
	// w innych przypadkach - da się
	return true;
}

int main() {
	
	// ilość cukierków i torebek
	unsigned long long n, k;
	scanf("%llu %llu", &n, &k);
	
	// wypisanie
	if (candies(n, k)) {
		printf("TAK");
	} else {
		printf("NIE");
	}
	
	return 0;
}
