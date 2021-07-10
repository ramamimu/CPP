#include <cstdio>

//int hasil=1;

int pangkat(int x, int y, int hasil){
	hasil=1;
	for (int i=0; i<y; i++){
		hasil*=x;
	}
//	printf("hasil =%d\n", hasil);
	return hasil;
}

int main(){
	int a, b, result;
	while(1){
		scanf("%d %d", &a, &b);
		pangkat(a, b, result);
		printf("hasil =%d\n", result);
	}
	return 0;
}