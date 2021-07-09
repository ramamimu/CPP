#include<cstdio>

int main(){
	int b, c, sum=0;
	scanf("%d", &b);
	for(; b>0; b--){
		scanf("%d", &c);
		sum=sum+c;
//		printf("%d\n", sum);
	}
	printf("%d\n", sum);
	return 0;
}