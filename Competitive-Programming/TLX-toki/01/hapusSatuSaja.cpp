#include <iostream>
#include <string>

using namespace std;

int main()
{
	string a, b, c;
	cin >> a 
		>> b;

	for(int i=0; i<a.length(); i++)
	{
		c=a;
		c.erase(i, 1);
		if (c==b)
		{
			cout<<"Tentu saja bisa!"<<endl;
			return 0;
		}
	}
	cout<<"Wah, tidak bisa :("<<endl;
	return 0;
}