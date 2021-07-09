#include <cstdio>

int arr[40][40];

int notVisited(int b, int k, int point)
{
	if (arr[b][k]==point)
		return true;
	else
		return false;
}

int ans=0;
void check(int b, int k, int m, int n, int point)
{
	if ((b>=0 && k>=0)&&(b<m &&k<n))
		if (notVisited(b, k, point))
		{
			ans++;
			arr[b][k]=0;
			check(b, k+1, m, n, point);
			check(b, k-1, m, n, point);
			check(b+1, k, m, n, point);
			check(b-1, k, m, n, point);

		}
}

int main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	for (int i=0; i<m; i++)
		for (int j=0; j<n; j++)
			scanf("%d", &arr[i][j]);
	int b,k;		
	scanf("%d %d", &b, &k);
	int point = arr[b][k];
	for (int i=0; i<m; i++)
		for (int j=0; j<n; j++)
			if(arr[i][j]!=point)
				arr[i][j]=0;
	check(b, k, m, n, point);
	printf("%d\n", ans*(ans-1));
	return 0;
}