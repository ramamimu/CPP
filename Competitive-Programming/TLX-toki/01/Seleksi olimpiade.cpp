#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

typedef struct{
	string id;
	int sesi1, sesi2, sesi3;
}peserta;

bool compare(peserta a, peserta b)
{
	if(a.sesi3 != b.sesi3)
		return a.sesi3 > b.sesi3;
	else if (a.sesi2 != b.sesi2)
		return a.sesi2 > b.sesi2;
	else if (a.sesi1 != b.sesi1)
		return a.sesi1 > b.sesi1;
	else
		return a.id > b.id;
}

int main()
{
	int t;
	scanf("%d", &t);
	
	int n, m;
	for(int i=0; i<t; i++)
	{
		scanf("%d %d", &n, &m);
		peserta seleksi[n];
		
		string tim;
		cin >> tim;

		for(int j=0; j<n; j++)
		{
			cin >> seleksi[j].id >> seleksi[j].sesi1
				>> seleksi[j].sesi2 >> seleksi[j].sesi3;
		}
		
		sort(seleksi, seleksi+n, compare);

		int index;
		for(int j=0; j<n; j++)
		{
			if(tim==seleksi[j].id)
			{
				index=j+1;
				break;
			}
		}
		
		if(index<=m)
			cout<<"YA"<<endl;
		else
			cout<<"TIDAK"<<endl;
	}
	return 0;
}