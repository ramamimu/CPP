#include <cstdio>

int kubik(int x){
	return x*x*x;
}

void cetak(int n){
	printf("%d\n", n);
}

int main(){
	int volume=kubik(5);
	cetak(volume);
	int selisih= volume-kubik(4);
	cetak(selisih);
	return 0;
}