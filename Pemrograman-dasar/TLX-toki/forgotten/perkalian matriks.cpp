#include <stdio.h>

int main(){
	int n, m, p, hasil;
	int angka1[102][102], angka2[102][102];
	//coba
//	int a, b;
	
	scanf("%d %d %d", &n, &m, &p);
	for(int i=1; i<=n; ++i){
		for(int j=1; j<=m; ++j){
			scanf("%d", &angka1[i][j]);
		}
	}
	//coba
//	while (scanf("%d %d", &a, &b) != EOF){
//		printf("%d\n", angka1[a][b]);
//	}
	for(int i=1; i<=m; ++i){
		for(int j=1; j<=p; ++j){
			scanf("%d", &angka2[i][j]);
		}
	}
	//coba
//	while (scanf("%d %d", &a, &b) != EOF){
//		printf("%d\n", angka2[a][b]);
//	}
	
	for (int i=1; i<=n; ++i){
		for (int j=1; j<=p; ++j){
			hasil=0;
			for(int k=1; k<=m; k++){
				hasil+=angka1[i][k]*angka2[k][j];
			}
			printf("%d", hasil);
			if(j==p){
				continue;
			} else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}