#include<iostream>
using namespace std;
//59min
int main() {
	int wejscie;
	cin >> wejscie;
	for (int k = 0; k < wejscie; k++) {
		int pomoc;
		cin >> pomoc;
		double array[100];
		for (int j = 0; j < pomoc; j++) {
			cin >> array[j];
		}
		//tutaj nalezy uporzadkowac
		double a, b;
		for (int i = 0; i < pomoc; i++) { //wykona sie to 7 razy
			for (int j = 0; j < pomoc - i; j++) {
				if (array[j] > array[pomoc - 1 - i]) {
					a = array[j];
					b = array[pomoc - 1 - i];
					array[j] = b;
					array[pomoc - 1 - i] = a;
				}
			}
		}
		if (pomoc%2==0) {
			printf("%f", (array[pomoc / 2] + array[(pomoc / 2) - 1])/2);
		}
		else
			printf("%f", (array[pomoc/2]));
		cout << endl;
	}
}
