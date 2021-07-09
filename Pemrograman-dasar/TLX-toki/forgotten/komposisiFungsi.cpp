#include <stdio.h>
#include <math.h>

int fungsi(int a, int b, int k, int x){
	if(k==1) return abs(a*x+b);
	else return abs(a*fungsi(a, b, k-1, x)+b);
}

int main(){
	int a, b, k, x;
	scanf("%d %d %d %d",&a,&b,&k,&x);
	printf("%d\n", fungsi(a, b, k, x));	
	return 0;
}