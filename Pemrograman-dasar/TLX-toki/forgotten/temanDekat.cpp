#include <stdio.h>
#include <math.h>

int pangkat( int a, int d){
	if(d==1) return a;
	return a*pangkat(a, d-1);
}

int main(){
	int n, d;
	scanf("%d%d", &n, &d);
	int t[10000]={}, x[n]={}, y[n]={}, minimal, maximal;
	for(int i=0; i<n; i++){
		scanf("%d %d", &x[i], &y[i]);
	}
	int temp=0;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			t[temp]= abs(pangkat(x[j]-x[i], d)) + abs(pangkat(y[j]-y[i],d));
//			printf("--i=%d--j=%d--%d\n",i,j, t[temp]);
			if(i==0 && j==1){	
				minimal=t[0];
				maximal=t[0];
			}
			if(temp>0){
				if (maximal < t[temp]){
					maximal=t[temp];
				}
				if (minimal > t[temp]){
					minimal= t[temp];
				}
			} 
			temp++;
		}
	}
	printf("%d %d\n", minimal, maximal);
	return 0;
}