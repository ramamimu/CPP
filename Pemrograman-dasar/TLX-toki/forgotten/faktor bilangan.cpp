#include <cstdio>

int main(){
	int n,a=n;
	scanf("%d", &n);
	for (int i=1; i<=n;i++ ){
//		printf("%d\n", n);
		if(n%i==0){
			a=n/i;
			printf("%d\n", a);
		}
	}
	return 0;
}