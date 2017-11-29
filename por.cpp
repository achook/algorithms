#include <cstdio>

bool checkOrder(unsigned int array[], unsigned int len) {
	// iteracja prez wszystkie elementy
	// oprócz ostanieniego (nie ma z czym porównać)
	for (unsigned int j = 0; j < len - 1; j++) {
		
		// jeśli obecny element jest większy od kolejnego - zbiór nieuporządkowany
		if (array[j] > array[j+1]) {
			return false;
		}
	}
	
	// jeśli wszystko było dobrze - zbiór uporządkowany
	return true;
}

int main() {
	// ilość książek
	unsigned int n;
	scanf("%u", &n);
	
	// tablica z układem książek
	unsigned int books[n];
	for (unsigned int i = 0; i < n; i++) {
		scanf("%u", &books[i]);
	}
	
	// ilość operacji
	unsigned int m;
	scanf("%u", &m);
	
	// tablica tablicy z 2 pozycjami
	// na których trzeba zamnienić liczby
	unsigned int operation[m][2];
	
	// pobranie pozycji
	for (unsigned int i = 0; i < m; i++) {
		scanf("%u %u", &operation[i][0], &operation[i][1]);
	}
	
	// iteracja przez cały zbiór
	for (unsigned int i = 0; i < m; i++) {
		
		unsigned int x = 0, y = 0;
		
		// tytuł 1 książki
		x = books[ operation[i][0] - 1 ];
		
		// tytył 2 książki
		y = books[ operation[i][1] - 1 ];
		
		// zamiany tytułów
		books[ operation[i][0] - 1 ] = y;
		books[ operation[i][1] - 1 ] = x;
		
		// sprawdzenie kolejności
		if (checkOrder(books, n)) {
			printf("TAK\n");
		} else {
			printf("NIE\n");
		}
		
	}
}
