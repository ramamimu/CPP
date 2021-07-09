#include <stdio.h>

int main(){
	int m, n, angka [102][102];
	
	scanf("%d %d", &m, &n);
	for(int i=0; i<m; ++i){
		for(int j=0; j<n; ++j){
			scanf("%d", &angka[i][j]);
		}
	}
	for (int i=0; i<n; i++){
		for(int j=m-1; j>=0; j--){
			if(j==0){
				printf("%d", angka[j][i]);
			} else{
				printf("%d ", angka[j][i]);
			}
		}
	printf("\n");
	}
	return 0;
}