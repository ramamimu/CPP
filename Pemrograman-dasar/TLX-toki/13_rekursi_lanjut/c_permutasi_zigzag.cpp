#include <cstdio>

int arr[15];
int pernah[15]={0};

void permutation(int n, int k=0)
{
	if (k==n)
	{
		
		int ok=1;
		for (int i=1; i<n-1; i++)
		{
			if((arr[i]<arr[i-1]) && (arr[i]<arr[i+1])){
				ok=1;
			} else if((arr[i]>arr[i-1]) && (arr[i]>arr[i+1])){
				ok=1;
			} else{
				ok=0;
				break;
			}
		}
		if (ok==1){
			for (int i=0; i<n; i++)
			{
				printf("%d", arr[i]);
			}
			printf("\n");
		}
	} else
	{
		for (int i=1; i<=n; i++)
		{
			if (pernah[i]==0){
				pernah[i]=1;
				arr[k]=i;
				permutation(n, k+1);
				pernah[i]=0;
			}
		}
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	permutation(n);
	return 0;
}