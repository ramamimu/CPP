#include <cstdio>

int main(){
	int N=0, arr[105];
	while (scanf("%d", &arr[N]) != EOF) {
		N++;
	}
	
	for(int i=N-1; i>=0; i-- ){
		printf("%d\n",arr[i]);
		
	}
	return 0;
}