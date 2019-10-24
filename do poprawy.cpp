long funkcja(long a, long b, long c)
{
	int d = 1;
	for (int i = 0; i < b; d *= (a%c), i++) { d = d % c; }
	long x = d % c;
	return x;
}
