#include <cstdio>
#include <math.h>

int komposisifngsi(int a, int b, int k, int x){
	if(k==0){
		return x;
	} else {
		return abs(a*komposisifngsi(a, b, k-1, x)+b);
	}
}

int main(){
	int a, b, k, x;
	scanf("%d%d%d%d", &a, &b, &k, &x);
	printf("%d\n", komposisifngsi(a, b, k, x));
	return 0;
}