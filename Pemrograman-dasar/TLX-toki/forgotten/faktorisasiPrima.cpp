#include <cstdio>

int pangkat=0;
int prime=0;

int faktorisasi(int n, int i){
	if (n%i==0){
		prime++;
		if (pangkat==0)	printf("%d", i);
		pangkat++;
		return faktorisasi(n/i, i);
	} else{
		if (pangkat>1){
			printf("^%d", pangkat);
		}
	}
	return n;
}

int main(){
	int n;
	scanf("%d", &n);
//	int prime=0;
	for (int i=2; i<=n; i++){
		pangkat=0;
		if (i==n && prime==0){
			printf("%d", n);
			printf("\n");
			return 0;
		}
		if(n%i==0){
			n=faktorisasi(n, i);
			if(n==1) continue;
			else printf(" x ");
		}
//		printf("--n=%d-- i=%d", n, i);
	}
	printf("\n");
}