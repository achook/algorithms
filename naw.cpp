#include <cstdio>

int main() {
	// ilość nawiasów
	unsigned int n;
	scanf("%u", &n);
	
	// tablica z nawiasami
	char brackets[n];
	scanf("%s", brackets);
	
	// brakujące nawiasy po lewej i po prawej
	unsigned int missingLeft = 0, missingRight = 0;
	
	// iteracja po całym zbiorze
	for (unsigned int i = 0; i < n; i++){
		
		// jeśli nawias zamykający
		if (brackets[i] == ')') {
			
			// jeśli mamy otwarte nawiasy
			if (missingRight > 0) {
				// 'zamykamy' nawiasu
				missingRight--;
			} else {
				// jeśli nie to dodajemy brakujący po lewej
				missingLeft++;
			}
			
		}
		
		// jeśli nawias otwierający
		if (brackets[i] == '(') {
			// dodajemy brakujący po prawej
			missingRight++;
			
		}
	}
	
	// wypisujemy ilość brakujących nawiasów
	printf("%u %u", missingLeft, missingRight);
	
	return 0;
}
