#include <cstdio>

int main(){
	int n, sum=0;
	while (scanf("%d", &n) != EOF) {
		sum=sum+n;
//		printf("%d\n", sum);
	}
	printf("%d\n", sum);
	return 0;
}