// Ahmad Ferdiansyah Ramadhani
// 5025201218
// Kupon Berhadiah

#include <cstdio>
#include <math.h>

typedef struct
{
	int minimum;
	int nMurni;
	int jarak;
} nilai;

int main()
{
	int n;
	nilai anggota;
	scanf("%d %d", &n, &anggota.nMurni);

	int masukan,temp;
	for(int i=0; i<n; i++)
	{
		scanf("%d", &masukan);
		temp=abs(masukan-anggota.nMurni);
		if(i==0)
		{
			anggota.minimum=temp;
			anggota.jarak=masukan;
		}
		else
		{
			if(temp==anggota.minimum)
			{
				if(masukan<anggota.jarak)
					anggota.jarak=masukan;
			}
			else
			{
				if (temp<anggota.minimum)
				{
					anggota.minimum=temp;
					anggota.jarak=masukan;
				}
			}
		}
	}
	printf("%d\n", anggota.jarak);
	return 0;
}