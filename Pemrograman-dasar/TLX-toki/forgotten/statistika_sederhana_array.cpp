#include <cstdio>

int main(){
	int angka[100], n, x, max, min, ulangan;
	scanf("%d", &n);
	
	for(int i=0; i<n; i++){
		scanf("%d", &angka[i]);
	}
	max=angka[0];
	min=angka[0];
		
	
	for(int j=0; j<n; j++){
		if (angka[j]>=max){
			max=angka[j];
//			printf("max %d\n", angka[j]);
		}
		if (angka[j]<=min){
			min=angka[j];
//			printf("min %d\n", angka[j]);
		}
	}
//		angka[0]=x;
//		printf("angka[0]=%d\n", angka[0]);
//		angka[i]=x;
//		printf("angka[i]=%d\n", angka[i]);
//		printf("angka[i-1]=%d\n", angka[i-1]);
//		ulangan=ulangan+1;
//		printf("ulangan ke-%d\n", ulangan);
//		if (angka[0]>=angka[i-1]){
//			
//		}
//		printf("max %d\n", max);
//		if (angka[0]<=angka[i-1]){
//			min=angka[0];
//		}
//		printf("min %d\n", min);
//	}
	printf("%d %d\n", max, min);
	return 0;
}