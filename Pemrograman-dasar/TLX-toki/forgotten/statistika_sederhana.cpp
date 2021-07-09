#include <cstdio>

//	GAGAL DI X<0, KARENA 0 SELALU LEBIH BESAR DARI O
//	SOLUSI AMBIL VARIABEL PERTAMA DARI ARRAY SAJA
int main(){
	int n, x, max=0, min=0;
	//a==max, b==min
	scanf("%d", &n);
	for(int i=0; i<n ; i++){
		scanf("%d", &x);
//		printf("%d", x);
		//max
		if(x>max)max=x;
//		else if (x>=0){
//			if(x>a);
//		}
//		if (x>a) a=x;
		//min
		if (x<=min)min=x;
//		z=x;
	}
	printf("%d %d\n", max, min);
	return 0;
}
