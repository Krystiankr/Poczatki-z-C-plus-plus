#include<iostream>
#define ROZMIAR_JEBANEJ_TABLICY 10
using namespace std;
int main()
{
	int a, b;
	int TABLICA_I_HUJ[ROZMIAR_JEBANEJ_TABLICY] = { 1,2,3,4,5,6,7,8,9,10};
	for (int i = 0; i < ROZMIAR_JEBANEJ_TABLICY-1; i++)
	{
		if (i < (ROZMIAR_JEBANEJ_TABLICY - 1)) {
			if ((i % 2) == 0)
			{
				//cout << TABLICA_I_HUJ[i];
				if (((ROZMIAR_JEBANEJ_TABLICY - 1) % 2) == 0) {
					a = TABLICA_I_HUJ[ROZMIAR_JEBANEJ_TABLICY - 1 - i];
					b = TABLICA_I_HUJ[i];
					TABLICA_I_HUJ[ROZMIAR_JEBANEJ_TABLICY - i - 1] = b;
					TABLICA_I_HUJ[i] = a;
				}
				else {
					a = TABLICA_I_HUJ[ROZMIAR_JEBANEJ_TABLICY - 2 - i];
					b = TABLICA_I_HUJ[i];
					TABLICA_I_HUJ[ROZMIAR_JEBANEJ_TABLICY - i - 2] = b;
					TABLICA_I_HUJ[i] = a;
				}

			}
		}
	}
	for (int i = 0; i < ROZMIAR_JEBANEJ_TABLICY; i++) {
		cout << TABLICA_I_HUJ[i];
	}
	
}
