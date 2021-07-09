#include <cstdio>

int main() {
	int n, m, segitiga, minimum;
	scanf("%d %d", &n, &m);
	segitiga	= 0.5*2*1;
	minimum		= (n*m)/segitiga;
	printf("%d", minimum);
}
