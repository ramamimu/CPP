#include <stdio.h>
#include <math.h>

int main(){
	int n, batas, faktor;
	long long a;
	scanf("%d", &n);
	
	for (int i=0; i<n; i++){
		faktor=1;
		scanf("%lld", &a);
		
		batas=trunc(a/2);
		for(int j=1; j<=batas; j++){
			if (a%j==0){
				faktor+=1;
			}
//			printf("faktor %d\n", faktor);
			if (faktor>4){
					break;
			}
		}
//		printf("faktor %d\n", faktor);
		if (faktor>4){
			printf("BUKAN\n");
		} else {
			printf("YA\n");
		}
	}
	return 0;
}
