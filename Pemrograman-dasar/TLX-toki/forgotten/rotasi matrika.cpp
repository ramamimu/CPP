#include <stdio.h>

int main(){
	int m, n, angka [102][102];
	
	scanf("%d %d", &m, &n);
	for(int i=1; i<=m; i++){
		for(int j=1; j<=n; j++){
			scanf("%d", &angka[i][j]);
		}
	}
	for (int i=1; i<=n; i++){
		for(int j=m; j>0; j--){
			if(j==1){
				printf("%d", angka[j][i]);
			} else{
				printf("%d ", angka[j][i]);
			}
		}
	printf("\n");
	}
	return 0;
}