#include <iostream>

using namespace std;

int d;

void stars(int a){
	d++;
	if (a==1){
		cout << "*" << endl;
	} else{
		stars(a-1);
		for(int i=1; i<=a; i++){
			cout<<"*";
		}
		cout << endl;
		stars(a-1);
	}
}

int main(){
	int a;
	cin >> a;
	stars(a);
	cout << d << endl;
	return 0;
}