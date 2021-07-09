// Ahmad Ferdiansyah Ramadhani
// 5025201218
// Pendataan Bebek

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int q, start, finish;
	scanf("%d", &q);
	for (int i=0; i<q; i++)
	{
		scanf("%d %d", &start, &finish);
		int l=lower_bound(arr, arr+n, start+1)-arr;
		int r=upper_bound(arr, arr+n, finish)-arr;
		printf("%d\n", (r-l));
	}
	return 0;
}