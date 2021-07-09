#include <stdio.h>

int main(){
	int x1, x2, y1, y2, a, b, jarak;
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	a=x1-x2;
	if (a<0){
		a=a*-1;
	}
	b=y1-y2;
	if (b<0){
		b=b*-1;
	}
	jarak=a+b;
	printf("%d\n", jarak);
	return 0;
}