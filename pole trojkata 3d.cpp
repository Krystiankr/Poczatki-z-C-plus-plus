#include<iostream>
#include<math.h>
using namespace std;
int main() {
	double t0[3], t1[3], t2[3], t3[3] = {}, t4[3] = {};
	for (int i = 0; i < 3; i++)
		cin >> t0[i];
	for (int i = 0; i < 3; i++)
		cin >> t1[i];
	for (int i = 0; i < 3; i++)
		cin >> t2[i];
	for (int i = 0; i < 3; i++) {
		t3[i] = t1[i] - t0[i];
	}
	for (int i = 0; i < 3; i++) {
		t4[i] = t2[i] - t0[i];
	}
	double zmienna = (1./2)*sqrt((t3[1] * t4[2] - t3[2] * t4[1])*(t3[1] * t4[2] - t3[2] * t4[1]) + (t3[2] * t4[0] - t3[0] * t4[2])*(t3[2] * t4[0] - t3[0] * t4[2]) + (t3[0] * t4[1] - t4[0] * t3[1])*(t3[0] * t4[1] - t4[0] * t3[1]));
	printf("%lf", zmienna);
}
