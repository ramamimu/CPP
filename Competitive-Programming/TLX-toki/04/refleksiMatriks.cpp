#include <cstdio>
#include <stdlib.h>

int **arr1, **arr2;
int n,m,o,p;

bool identik()
{
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            if(arr1[i][j] != arr2[i][j])
                return false;
    return true;
}

bool vertikal()
{
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            if(arr1[i][j] != arr2[i][(n-1)-j])
                return false;
    return true;
}

bool horizontal()
{
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            if(arr1[i][j] != arr2[(n-1)-i][j])
                return false;
    return true;
}

bool diagonalKiriBawah()
{
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            if(arr1[i][j] != arr2[(n-1)-j][(n-1)-i])
                return false;
    return true;    
}

bool diagonalKananBawah()
{
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            if(arr1[i][j] != arr2[j][i])
                return false;
    return true; 
}

int main()
{  
    scanf("%d %d", &n, &m);
    arr1= (int**) malloc(n*sizeof(int*));
    for (int i = 0; i < n; i++)
        arr1[i]=(int*) malloc(m*sizeof(int));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &arr1[i][j]);

    scanf("%d %d", &o, &p);
    arr2= (int**) malloc(o*sizeof(int*));
    for (int i = 0; i < o; i++)
        arr2[i]=(int *) malloc(p*sizeof(int));
    
    for (int i = 0; i < o; i++)
        for (int j = 0; j < p; j++)
            scanf("%d", &arr2[i][j]);

    if(n != m)
    {
        printf("tidak identik\n");
        return 0;
    }
    else if(o != p)
    {
        printf("tidak identik\n");
        return 0;
    }
    else if((n != o) && (m != p))
    {
        printf("tidak identik\n");
        return 0;
    }

    if(identik())
    {
        printf("identik\n");
        return 0;
    }
    if(vertikal())
    {
        printf("vertikal\n");
        return 0;
    }
    if(horizontal())
    {
        printf("horisontal\n");
        return 0;
    }
    if(diagonalKananBawah())
    {
        printf("diagonal kanan bawah\n");
        return 0;        
    }
    if(diagonalKiriBawah())
    {
        printf("diagonal kiri bawah\n");
        return 0;        
    }

    printf("tidak identik\n");
    return 0;
}