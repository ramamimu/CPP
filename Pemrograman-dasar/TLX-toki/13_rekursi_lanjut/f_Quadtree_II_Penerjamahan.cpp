#include <iostream>
#include <stdlib.h>
#include <cstdio>
#include <string>

using namespace std;

int arr[130][130];

int pow(int index)
{
	int pangkat=1;
	while(pangkat<index)
		pangkat*=2;
	return pangkat;
}

void change(int l, int r, int t, int b)
{
	for(int i=t; i<b; i++)
		for (int j=l; j<r; j++)
			arr[i][j]= 1;
}

void quadtree(string temp, int lenght, int indexMat)
{
	int t=0, l=0, b=indexMat, r=indexMat;
	int len=1;
	while(len<lenght)
	{
		if (temp[len]=='0')
		{
			r=(l/2)+(r/2);
			b=(t/2)+(b/2);
		}
		else if (temp[len]=='1')
		{
			l=(l/2)+(r/2);
			b=(t/2)+(b/2);
		}
		else if (temp[len]=='2')
		{
			t=(t/2)+(b/2);
			r=(r/2)+(l/2);
		}
		else if (temp[len]=='3')
		{
			t=(t/2)+(b/2);
			l=(l/2)+(r/2);
		}
		len++;
	}
	change(l,r,t,b);
}

int main()
{
	int n;
	scanf("%d", &n);
	string matriks[n];
	for(int i=0; i<n; i++)
		cin >> matriks[i];

	int r, c;
	scanf("%d %d", &r, &c);
	
	int index=pow(max (r,c));
//	arr = (int**) calloc(index, sizeof(int*));
//	for (int i=0; i<index; i++)
//		arr [i]= (int*)calloc(index, sizeof(int));
//	
	for(int i=0; i<n; i++)
	{
		string temp=matriks[i];
		int len=temp.length();
		quadtree(temp, len, index);
	}
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
	
	return 0;
}