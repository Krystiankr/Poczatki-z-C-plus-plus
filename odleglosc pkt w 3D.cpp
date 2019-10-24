#include<iostream>
#include<math.h>
using namespace std;
int main() {
	double tablica1[3],tablica2[3];
	for (int i = 0; i < 3; i++) {
		cin >> tablica1[i];
	}
	for (int i = 0; i < 3; i++) {
		cin >> tablica2[i];
	}
	printf("%lf", (sqrt((tablica1[0] - tablica2[0])*(tablica1[0] - tablica2[0]) + (tablica1[1] - tablica2[1])*(tablica1[1] - tablica2[1]) + (tablica1[2] - tablica2[2])*(tablica1[2] - tablica2[2]))));
}
