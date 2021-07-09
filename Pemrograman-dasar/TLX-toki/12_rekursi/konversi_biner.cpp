#include <cstdio>

int biner(int n){
	if(n==1){
		return printf("%c", '1');;
	} else if(n%2==1){
		n=n/2;
		return biner(n) + printf("%c", '1');
	} else{
		n=n/2;
		return biner(n) + printf("%c", '0');
	}
}

int main(){
	int n;
	scanf("%d", &n);
	biner(n);
	printf("\n");
	return 0;
}