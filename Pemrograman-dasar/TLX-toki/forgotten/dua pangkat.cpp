#include <cstdio>

int main(){
	float n;
	scanf("%f", &n);
	while (n>1.00){
		n=n/2;
//		printf("%f\n", n);
	}
	if (n==1.00){
		printf("ya\n");
	} else{
		printf("bukan\n");
	}
	return 0;
}