#include <cstdio>

int pangkat(int a, int b) {
	int hasil = 1;
	for (int i = 0; i < b; i++) {
		hasil *= a;
	}
	return hasil;
}

int main(){
	int y, x;
	scanf("%d", &x);
	y = pangkat(x, 5);
	printf("y=%d\n", y);
	return 0;
}