#include <cstdio>

using namespace std;

int main() {
	unsigned int n, k;
	scanf("%u %u", &n, &k);
	
	unsigned int nums[n];
	
	for (unsigned int i = 0; i < n; i++) {
		scanf("%u", &nums[i]);
	}
	
	// maksymalna liczba liczb które można pominąć
	unsigned int canRemove = n - k;
	
	// maksymalna osiągnięta śrenia
	double maxAvg = 0.0;
	
	
	for (unsigned int i = 0; i <= canRemove; i++) {
		// liczba liczb w obecnej iteracji pętli
		double n2 = n - i;
		
		// chwilowa średnia liczb
		double tempAvg = 0.0;
		
		// chwilowa suma liczb
		unsigned int tempSum = 0;
		
		// zsumowanie wszystkich liczb
		// zaczynając od indeksu równego i
		for (unsigned int j = i; j < n; j++) {
			tempSum += nums[j];
		}
		
		//obliczenie śreniej
		tempAvg = double(tempSum) / n2;
		
		// jeśli średnia jest większa - zamień		
		if (tempAvg > maxAvg) {
			maxAvg = tempAvg;
		}
		
	}
	
	for (unsigned int i = 0; i <= canRemove; i++) {
		// liczba liczb w obecnej iteracji pętli
		double n2 = n - i;
		
		// chwilowa średnia liczb
		double tempAvg = 0.0;
		
		// chwilowa suma liczb
		unsigned int tempSum = 0;
		
		
		// zsumowanie wszystkich liczb
		// kończąc na indeksie równym i
		for (unsigned int j = 0; j < (n - i); j++) {
			tempSum += nums[j];
		}
		
		//obliczenie śreniej
		tempAvg = double(tempSum) / n2;
		
		// jeśli średnia jest większa - zamień
		if (tempAvg > maxAvg) {
			maxAvg = tempAvg;
		}
		
	}
	
	// wypisanie największej śreniej
	printf("%.3lf", maxAvg);
	
	return 0;
}
