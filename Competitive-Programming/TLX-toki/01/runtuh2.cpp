#include <cstdio>
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int hilangkan(string karakter[], string satu, int r, int*acuan)
{
	int tanda=0;
	for (int i=1; i<=r; i++)
	{
		int a=satu.find(karakter[i]);
		if (satu.find(karakter[i]) != -1)
		{
			tanda++;
			for(int j=i; j>0; j--)
			{
				karakter[j]=karakter[j-1];
			}
			*acuan=i;
		}
	}
	return tanda;
}

void rombak(string karakter[],int acuan, int r, int c, int tanda)
{
	for(int i=0; i<c; i++)
	{
		int jalan=acuan;
		while(jalan>=tanda)
		{
			if(karakter[jalan][i]=='1')
			{					
				for(int maju=jalan+1; maju<=r; maju++)
				{
					if (karakter[maju][i]=='1')
					{
						swap(karakter[maju-1][i], karakter[jalan][i]);
						break;
					}
					else if(maju==r)
					{
						swap(karakter[maju][i], karakter[jalan][i]);
					}
				}
			}
			jalan--;
		}
	}
}

bool cek(string karakter[],string satu, int r)
{
	for(int i=r; i>0; i--)
	{
		int a=satu.find(karakter[i]);
		if (satu.find(karakter[i]) != -1)
		{
			return true;
		}
	}
	return false;
}

int main()
{
	int r, c;
	scanf("%d %d", &r, &c);
	string karakter[r+1];
	char temp1[c+1];
	char temp0[c+1];
	for(int i=0; i<c; i++)
	{
		temp1[i]='1';
		temp0[i]='0';
	}
	temp1[c]='\0';
	temp0[c]='\0';
	string Temp1=temp1;
	string Temp0=temp0;

	karakter[0]=Temp0;
	
//	cout<<endl<<karakter[0]<<endl;
	
	for(int i=1; i<=r; i++)
		cin>>karakter[i];
	
	int total=0;
	int acuan;
//	int tanda=hilangkan(karakter, Temp1, r, &acuan);
//	total+=tanda;
//	cout<<tanda<<' '<<acuan<<endl;
//	rombak(karakter, acuan, r, c, tanda);

	while(cek(karakter,Temp1,r+1))
	{
		int tanda=hilangkan(karakter, Temp1, r, &acuan);
//		cout<<tanda<<' '<<acuan<<endl;
		rombak(karakter, acuan, r, c, tanda);
	}

//	for(int i=0; i<total; i++)
//	{
//		for(int j=0; j<c; j++)
//			cout<<'0';
//		cout<<endl;
//	}
//	cout<<"batas"<<endl;
	for(int i=1; i<=r; i++)
	{
		cout<<karakter[i]<<endl;
	}
	
	return 0;
}