// Ahmad Ferdiansyah Ramadhani
// 5025201218
// Kualitas Baju

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	int val[n];
	for(int i=0; i<n; i++)
	{
		scanf("%d", &val[i]);
	}
	sort(val, val+n);
	int mid=n/2;
	if(n%2==0)
		printf("%.1f\n", (float)(val[mid]+val[mid-1])/2);
	else
		printf("%.1f\n", (float)val[mid]);

	return 0;
}