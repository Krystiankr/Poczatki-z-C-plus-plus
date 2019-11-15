#include<iostream>
using namespace std;
int main() {
	char zmienna[100];

	int x;
	cin >> x;
	cin.getline(zmienna, 100);
	for (int i = 0; i < x; i++)
		cout << zmienna;
}
