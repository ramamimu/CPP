#include <cstdio>

int cekPrime[1000005]={};

int main()
{
	for(int i=2; i*i<=1000000 ;i++)
	{
		if(cekPrime[i])
			continue;

		int temp=i+i;
		while(temp < 1000000)
		{			
			cekPrime[temp]++;
			temp+=i;
		}
	}
	
	int primeNumb[78500];
	int index=1;
	
	for(int i=2; index<80000; i++)
	{
		if(i>999999)
		{
			break;
		}
		if(!cekPrime[i])
		{
			primeNumb[index]=i;
			index++;
		}
	}

	int n;
	scanf("%d", &n);
	int ind;
	for(int i=0; i<n; i++)
	{
		scanf("%d", &ind);
		printf("%d\n", primeNumb[ind]);
	}
	
	return 0;
}