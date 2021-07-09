#include <cstdio>

int main(){
//	int n, batas, angka[10]={0,1,2,3,4,5,6,7,8,9};
//	scanf("%d", &n);
//	printf("%d\n", angka[n]);
	int n, a=0;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			if(a==10) a=0;
			printf("%d", a);
			a+=1;
		}
	printf("\n");
	}
	
	return 0;
}