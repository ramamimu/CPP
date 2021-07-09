// Ahmad Ferdiansyah Ramadhani
// 5025201218
// Wartel

#include <iostream>
#include <string>

using namespace std;

typedef struct
{
	string nama;
	string nomor;
}daftar;

int binser(daftar telepon[], string Nama, int l, int r)
{
	int mid;
	while(l < r)
	{
		mid=l+(r-l)/2;
		if(Nama.compare(telepon[mid].nama)<=0)
		{
			r=mid;
		}
		else if(Nama.compare(telepon[mid].nama)>0)
		{
			l=mid+1;
		}
//		else
//		{
//			return mid;
//		}
	cout<<mid<<endl;
	}
	return mid;
} 

int main()
{
	int n,q;
	cin>>n>>q;
	
	daftar telepon[n];
	for (int i=0; i<n; i++)
	{
		cin>>telepon[i].nama>>telepon[i].nomor;
	}
	string cariNama;
	int nomorHP;
	for(int i=0; i<q; i++)
	{
		cin>>cariNama;
		nomorHP=binser(telepon, cariNama, 0, n);
		if(telepon[nomorHP].nama==cariNama)
		{
			cout<<telepon[nomorHP].nomor<<endl;
		}
		else
		{
			cout<<"NIHIL"<<endl;
		}
	}
	return 0;
}