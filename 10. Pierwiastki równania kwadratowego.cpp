#include<iostream>
#include<math.h>
using namespace std;
int main() {
	double a, b, c;
	cin >> a >> b >> c;
	if (a != 0) {
		double delta = b*b - 4. * a*c;
		if ((delta)<0){
			cout << "B";
		}
		else if (delta == 0) { cout << -b / (2. * a); }
		else { printf("%lf", (-b - sqrt(delta)) / (2. * a)); cout << " "; printf("%lf", (-b + sqrt(delta)) / (2. * a)); }
	}
	else {
		if (b == 0) {
			if (c == 0) {
				cout << "N";
			}
			else { cout << "B"; }
		}
		else {
			printf("%lf", (-c)/b);
		}
	}
}
