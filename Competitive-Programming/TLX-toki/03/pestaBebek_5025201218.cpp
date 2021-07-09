// Ahmad Ferdiansyah Ramadhani
// 5025201218
// Pesta Bebek

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, index;
	cin>>n;
	string name[n], temp;
	for(int i=0; i<n; i++)
	{
		cin>>name[i];
		temp=name[i];
		sort(name, name+(i+1));
		index=lower_bound(name, name+(i+i), temp)-name;
		cout<<index+1<<endl;
	}
	return 0;
}