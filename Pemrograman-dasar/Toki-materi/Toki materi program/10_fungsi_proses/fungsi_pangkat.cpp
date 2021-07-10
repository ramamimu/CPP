#include <cstdio>

//int hasil=1;

int pangkat(int x, int y){
	int hasil=1, caplin;
	for (int i=0; i<y; i++){
		hasil*=x;
	}
//	printf("hasil =%d\n", hasil);
	caplin= hasil + 99;
	return caplin;
}

int main(){
	int a, b, result;
	while(1){
		scanf("%d %d", &a, &b);
//		result= pangkat(a, b);
		printf("hasil =%d\n", pangkat(a, b));
	}
	return 0;
}