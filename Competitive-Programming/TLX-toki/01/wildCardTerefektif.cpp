#include <iostream>
#include <string>

using namespace std;

int main()
{
	string kata1;
	cin>>kata1;
	int bintang=kata1.find('*');
	kata1.erase(bintang, 1);
	int len1=kata1.length();
	int n;
	
	scanf("%d", &n);
	string kata2;
	string temp;
	for(int i=0; i<n; i++)
	{
		cin>>kata2;
		temp=kata2;
		if(len1> kata2.length())
			continue;
		kata2.erase(bintang, kata2.length()-len1);
		if(kata1==kata2)
			cout<<temp<<endl;
	}
	return 0;
}