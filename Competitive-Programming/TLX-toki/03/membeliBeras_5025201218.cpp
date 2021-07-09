// Ahmad Ferdiansyah Ramadhani
// 5025201218
// Membeli Beras


#include <cstdio>
#include <math.h>
#include <algorithm>

using namespace std;

typedef struct 
{
    double harga, berat;
}jenis;

bool compare(jenis a,jenis b)
{
    return (a.harga/a.berat > b.harga/b.berat);
}

int main()
{
    int n; 
    double ask;
    scanf("%d %lf", &n, &ask);
    jenis barang[n];
    for(int i=0; i<n; i++)
        scanf("%lf", &barang[i].berat);
    for(int i=0; i<n; i++)
    {
        scanf("%lf", &barang[i].harga);
    }
    sort(barang, barang+n, compare);
    double harga=0;
    for(int i=0; i<n; i++)
    {
        if(ask-barang[i].berat>0)
        {
            harga+=barang[i].harga;
            ask-=barang[i].berat;
        }
        else
        {
            if (ask>0)
            {
                harga+=((barang[i].harga/barang[i].berat)*ask);
                ask-=ask;
            }
            else
                break;
        }
    }
    printf("%.5lf\n", harga);
    return 0;
}