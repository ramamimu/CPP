#include <cstdio>

int temp=0;
int lewat=0;
void draw(int n){
	if (n>0){
		draw(n-1);
		for(int i=0; i<n; i++){
			printf("*");
		}
		printf("\n");
		draw(n-1);
	}
}

int main(){
	int n;
	scanf("%d", &n);
	draw(n);
	return 0;
}