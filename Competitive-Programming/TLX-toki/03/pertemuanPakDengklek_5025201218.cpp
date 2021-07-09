// Ahmad Ferdiansyah Ramadhani
// 5025201218
// Pertemuan Pak Dengklek


#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;


bool swapping(string a, string b)
{
	if (a.length()!=b.length())
		return a.length() < b.length();
	else
		return (a<b);
}

int main()
{
	int n;
	cin>>n;
	string nama[n];
	for(int i=0; i<n; i++)
	{
		cin>>nama[i];
	}
	sort(nama, nama+n, swapping);
	for(int i=0; i<n; i++)
	{
		cout<<nama[i]<<endl;
	}
	return 0;
}