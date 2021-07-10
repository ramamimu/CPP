//#include <cstdio>
//#include <iostream>
#include <stdio.h>
//using namespace std;

void tukar(int &x, int &y){
	int temp=x;
	x=y;
	y=temp;
}

int main(){
	int a, b;
	while (1){
		printf("nilai a: ");
		scanf("%d", &a);
		printf("nilai b: ");
		scanf("%d", &b);
		tukar(a, b);
		
		printf("nilai a sekarang = %d\nnilai b sekarang = %d\n", a,b);
	}
}

/*
int main(){
	int a, b;
	while (1){
		cout<<"nilai a:";
		cin>>a;
		cout<<"nilai b:";
		cin>>b;
		tukar(a, b);
		
		cout<<"nilai a sekarang= "<<a<<endl<<"nilai b sekarang= "<<b<<endl;
	}
}
*/