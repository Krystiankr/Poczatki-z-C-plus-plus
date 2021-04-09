#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
int main() {
	int tab[1000], n; //int* tab = new int[n];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &tab[i]);
	int tmp = 0;
	int last = n % 2 == 0 ? n - 2 : n - 1;
	for (int i = 0; i < (n / 2); i += 2) {
		tmp = tab[i];
		tab[i] = tab[last - i];
		tab[last - i] = tmp;
	}
	for (int i = 0; i < n; i++)
		printf("%d ", tab[i]);
}
