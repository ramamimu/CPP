#include <cstdio>

int main(){
	int n, i, j, k;
//	printf ("********\n");
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		for(j=0; j<=n-i; j++){
			if (j==0){
				continue;
			} else{
				printf(" ");
			}
		}
		for(k=0; k<=n-j; k++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}