#include <iostream>

using namespace std;

int euclid(int a, int b)
{
	if(b==0)
		return a;
	else
		return euclid(b, a%b);
}

int main()
{
	int n;
	scanf("%d", &n);
	int satu, dua, FPB, KPK, kali=1;
	for(int i=0; i<n; i++)
	{
		if(i<2)
		{
			scanf("%d %d", &satu, &dua);
			i++;
			kali=kali*satu*dua;
		}
		else
		{
			scanf("%d", &dua);
			kali=satu*dua;
		}
		satu=kali/euclid(max(satu, dua), min(satu, dua));
	}
	printf("%d\n", satu);
	return 0;
}