#include<iostream>
using namespace std;
int main() {
	int miejsce;
	cin >> miejsce;
	int *array = new int[miejsce];
	for (int i = 0; i < miejsce; i++) {
		cin >> array[i];
	}
	int a, b;
	for (int i = 0; i < (miejsce / 2); i++) {
		if (i % 2 == 0) {
			if (miejsce % 2 == 0) {// 10   9  
				a = array[i];
				b = array[miejsce - 2 - i];
				array[i] = b;
				array[miejsce - 2 - i] = a;
			}
			else {
				a = array[i];// 11    - 2 9 -
				b = array[miejsce - 1 - i];
				array[i] = b;
				array[miejsce - 1 - i] = a;
			}
		}
	}
	for (int i = 0; i < miejsce; i++) {
		cout << array[i];
	}
	delete[] array;
}
