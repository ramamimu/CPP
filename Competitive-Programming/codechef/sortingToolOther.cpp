#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

struct ele{
	int f = 0;
	int occ = -1;
	int n = -1;
};

bool comp(const ele A,const ele B){
	if(A.f > B.f)return true;
	else if(A.f < B.f)return false;
	else{
		if(A.occ < B.occ)return true;
		else return false;
	}
}

void show1(ele A){
	for(int i=0;i<A.f;i++){
		cout << A.n << " ";
	}
}

void show(ele SortArray[],int mx){
	for(int i=0;i<mx;i++){
		show1(SortArray[i]);
	}
}

int main(){
	int n,m;
	cin >> n >> m;
	int arr[n];
	int mx = -1;
	for(int i=0;i<n;i++){
		cin >> arr[i];
		mx = max(arr[i],mx);
	}
	ele SortArray[mx];
	for(int i=0;i<n;i++){
		SortArray[arr[i]-1].f += 1;
		if(SortArray[arr[i]-1].occ==-1){
			SortArray[arr[i]-1].occ = i;
			SortArray[arr[i]-1].n = arr[i];
		}
	}
	//show(SortArray,mx);
	sort(SortArray, SortArray + mx,comp);
	show(SortArray,mx);
	return 0;
}