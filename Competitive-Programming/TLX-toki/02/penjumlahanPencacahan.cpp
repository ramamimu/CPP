#include <iostream>
#include <algorithm>

using namespace std;

long long euclid(long long a, long long b)
{
	if(b==0)
	{
		return a;
	}
	else
	{
		return euclid(b, (a%b));
	}
}

int main()
{
	long long a,b,c,d,pembagi;
	scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
	
	long long penyebut=(b*d)/euclid(max(b,d), min(b,d));
	long long pembilang=(penyebut/b)*a+(penyebut/d)*c;
	while(euclid(max(pembilang,penyebut), min(pembilang,penyebut))!=1)
	{
		pembagi=euclid(max(pembilang,penyebut), min(pembilang,penyebut));
		pembilang/=pembagi;
		penyebut/=pembagi;
	}
	
	printf("%lld %lld\n", pembilang, penyebut);
	
	return 0;
}