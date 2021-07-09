#include <iostream>
#include <string>

using namespace std;

int main()
{
	string first;
	cin>>first;
	int n;
	scanf("%d", &n);
	string anak[n];
	int tanda[n]={};
	for(int i=0; i<n; i++)
		cin>>anak[i];
	
	int len1=first.length();
	int bintang=first.find('*');
	cout<<bintang<<' '<<len1<<endl;
	if(bintang==0 && len1==1)
	{
		for(int i=0; i<n; i++)
			(tanda[i])++;
	} 
	else if(bintang==0)
	{
		first.erase(first.find('*'), 1);
		for(int i=0; i<n; i++)
		{
			string b=anak[i].substr(anak[i].length()-first.length(), first.length());
			if(first==b)
				(tanda[i])++;
		}
	}
	else if(bintang==(len1-1))
	{
		first.erase(first.find('*'), 1);
		for(int i=0; i<n; i++)
		{
			if(anak[i].find(first)==0)
				(tanda[i])++;
		}
	}
	else
	{
		string satu= first.substr(0, bintang);
		string dua= first.substr((bintang+1), (len1-bintang));
		cout<<endl<<satu<<' '<<dua<<endl;
		string temp=first.erase(0, first.find('*')+1);
		for(int i=0; i<n; i++)
		{
			string b=anak[i].substr(anak[i].length()-temp.length(), temp.length());
			cout<<temp<<' '<<b<<endl;
			if((anak[i].find(satu)==0) && dua==b)
				(tanda[i])++;
		}
	}
	
	for(int i=0; i<n; i++)
		if(tanda[i])
			cout<<anak[i]<<endl;
	return 0;
}