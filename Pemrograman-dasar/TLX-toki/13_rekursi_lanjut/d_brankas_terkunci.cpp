#include <cstdio>

int arr[15];
int pernah[15] = {0};

void cari(int n, int k, int l=1, int init=0)
{
	if(l>k)
	{
		int acuan=0;
		for (int i=0; i<k; i++)
		{
			if(arr[i]<=arr[i-1]){
				pernah[i]=1;
				acuan=1;
				break;
			}
		}
		if (acuan==0){
			for (int i=0; i<k; i++)
			{
				printf("%d ", arr[i]);
			}
			printf("\n");
		}
	} 
	else
	{
		for(int i=l; i<=n; i++){
			arr[init]=i;
			cari(n, k, l+1, init+1);
		}
	}
}

int main()
{
	int n, k;
	scanf("%d %d", &n, &k);
	cari(n, k);
	return 0;
}