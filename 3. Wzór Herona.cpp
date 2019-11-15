#include<iostream>
#include<math.h>
using namespace std;
int main() {
	double a, b, c, p,zmienna;
	cin >> a >> b >> c;
	p = (a + b + c) / 2;
	zmienna = (sqrt(p*(p - a)*(p - b)*(p - c)));
	if (a + b > c and a + c > b and c + b > a)
		printf("%lf", zmienna);
}
