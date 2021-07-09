// Ahmad Ferdiansyah Ramadhani
// 5025201218
// Petak Menarik

#include <cstdio>

int main()
{
	int r, c, k;
	scanf("%d %d %d", &r, &c, &k);
	int arr[r+2][c+2];
	for(int i=0; i<r+2; i++)
	{
		arr[i][0]=1;
		arr[i][c+1]=1;
	}
	for (int i=0; i<c+2; i++)
	{
		arr[0][i]=1;
		arr[r+1][i]=1;
	}
	for(int i=1; i<=r; i++)
		for(int j=1; j<=c; j++)
			scanf("%d", &arr[i][j]);
		
	int temp, tanda=0;
	for(int i=1; i<=c; i++)
		for(int j=1; j<=r; j++)
			if(arr[j+1][i]*arr[j-1][i]*arr[j][i+1]*arr[j][i-1]==k)
			{
				printf("%d %d\n", j, i);
				return 0;
			}
	
	printf("0 0\n");
	return 0;
}