#include <cstdio>
#include <math.h>

int main(){
	int n; 
	scanf("%d", &n);
	int a;
	for (int i=0; i<n; i++)
	{
		scanf("%d", &a);
		int ever=0;
		if(a==1)
			ever++;
		for(int j=2; j*j<=a; j++)
		{
			if (a%j == 0)
				ever++;
		}
		if (ever)
			printf("BUKAN\n");
		else
			printf("YA\n");
	}
	return 0;
}
