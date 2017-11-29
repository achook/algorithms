#include <iostream>

#define BOOKS 2000
#define OPERATIONS BOOKS/2

using namespace std;

int main() {
    cout << BOOKS << endl;
    
    for (int i = BOOKS; i > 0; i--) {
        cout << i;

        if (i != 1) {
            cout << ' ';
        } else {
            cout << endl;
        }
    }

    cout << OPERATIONS << endl;

    for (int i = 1; i < (OPERATIONS + 1); i++) {
        cout << i << ' ' << ((BOOKS - i) + 1) << endl;
    }

    return 0;
}