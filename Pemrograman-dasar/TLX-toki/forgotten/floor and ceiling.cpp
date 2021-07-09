#include <stdio.h>
#include <math.h>

int main(){
	float n;
	scanf("%f", &n);
//	printf("%lf\n", trunc(n));
	if (n<0){
		if (n!=trunc(n)){
			printf("%.0f %.0f\n", trunc(n-1), trunc(n));
		} else {
			printf("%.0f %.0f\n", n, n);
		}
	} else{
		if (n!=trunc(n)){
			printf("%.0f %.0f\n", trunc(n), trunc(n+1));
		} else {
			printf("%.0f %.0f\n", n, n);
		}
	}
	return 0;
}
