#include <stdio.h>

int main(){
	int n;
	
	scanf("%d", &n);
	if (n>0 && n<10){
		printf("satuan\n");
	} else if(n>=10 && n<100){
		printf("puluhan\n");
	} else if(n>=100 && n<1000){
		printf("ratusan\n");
	} else if(n>=1000 && n<10000){
		printf("ribuan\n");
	} else if(n>=10000 && n<100000){
		printf("puluhribuan\n");
	}
	
	return 0;
}
