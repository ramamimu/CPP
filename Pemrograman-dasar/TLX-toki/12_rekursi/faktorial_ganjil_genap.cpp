#include <stdio.h>

int faktorGnjlGnp(int n){
	if (n==1){
		return 1;
	} else if( n%2==1){
		return n*faktorGnjlGnp(n-1);
	} else{
		return (n/2)*faktorGnjlGnp(n-1);
	}
}

int main (){
	int n;
	scanf("%d", &n);
	printf("%d\n", faktorGnjlGnp(n));
	return 0;
}