#include <stdio.h>
#include <cstdio>
#include <string>

using namespace std;

void gambar(int x){
	for(int i=0; i<x; i++){
		printf("*");
	}
	printf("\n");
}

int main(){
	int n;
	while(scanf("%d", &n) != EOF){
		gambar(n);
	}
	
	return 0;
}
