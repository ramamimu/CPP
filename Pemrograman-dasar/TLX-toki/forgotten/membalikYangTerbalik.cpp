#include <cstdio>

int reverse(int x){
	int result=0;
	
	while(x>0){
		result=(result*10) + (x%10);
		x=x/10;
	}
	
	return result;
}


int main(){
	int a, b, sum;
	scanf("%d %d", &a, &b);
	sum= reverse(a)+reverse(b);
	printf("%d\n", reverse(sum));
	return 0;
}