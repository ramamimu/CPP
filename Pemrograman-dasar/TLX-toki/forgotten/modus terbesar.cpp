#include <stdio.h>

int main(){
	int n, z, max, angka[1000], modus, pilih;
	
	for (int i=0; i<=1000; i++){
		angka[i]=0;
	}
	max=0;
	modus=0;
	
	scanf("%d", &n);
	for (int i=1; i<=n; i++){
		scanf("%d", &z);
		angka[z]+=1;
//		printf("ini angka z %d jumlah %d\n",z, angka[z]);
		if (max<z){
			max=z;
		}
//		printf("ini max %d\n", max);
	}
	for (int j=1; j<=max; j++){
//		printf("angka ke j %d, angkanya %d\n", j, angka[j]);
		if (modus<=angka[j]){
			modus=angka[j];
			pilih=j;
//			printf("%d\n", modus);
		}
	}
	printf("%d\n", pilih);
	
	return 0;
}