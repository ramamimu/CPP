#include <bits/stdc++.h>

using namespace std;
int *numb, n;


bool isThereNumb(int *checker, int m)
{
	for(int i=0; i<=m; i++)
	{
		if(checker[i]>0)
			return true;
	}
	return false;
}

int whosFirst(int modus, int *checker)
{
	int index=n;
	for(int i=0; i<index; i++)
	{
		if(checker[numb[i]]==modus)
		return numb[i];
	}
	return 0;
}

int searchindex(int *checker, int m)
{
	int index=0, modus=0;
	for(int i=0; i<=m; i++)
	{
		if (checker[i]>modus)
		{
			index=i;
			modus=checker[i];							
		}
	}		

	int cari=whosFirst(modus, checker);
	return cari;
}

int main()
{
	int m;
	cin>>n>>m;
	
	numb = (int*) malloc ((n)*sizeof(int));
	int *checker= (int*) calloc (m+1, sizeof(int));
	
	for(int i=0; i<n; i++)
	{
		cin>>numb[i];
		checker[numb[i]]++;
	}

	while(isThereNumb(checker, m))
	{
		int index=searchindex(checker, m);
		for(int i=0; i<checker[index]; i++)
		{
			cout<<index<<' ';
		}
		checker[index]=0;
	}
	cout<<endl;
	return 0;
}