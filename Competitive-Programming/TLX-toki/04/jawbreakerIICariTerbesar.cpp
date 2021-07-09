#include <bits/stdc++.h>

using namespace std;

int **arr;
bool **ever;

bool notVisited(int r, int c, int clue)
{
    if(arr[r][c]==clue && (!ever[r][c]))
    {
        ever[r][c]=true;
        return true;
    }
    else
        return false;
}

int res=0;
void cek(int r, int c, int n, int m, int clue)
{
    if((r>=0 && r<n) && (c>=0 && c<m))
    {
        if(notVisited(r, c, clue))
        {
            res++;
            cek(r+1, c, n, m, clue);
            cek(r-1, c, n, m, clue);
            cek(r, c+1, n, m, clue);
            cek(r, c-1, n, m, clue);
        }
    }
}

int process(int n, int m)
{
    int cost=0;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
        {
            if (ever[i][j])
                continue;
            else
                cek(i, j, n, m, arr[i][j]);
            
            if(res>cost)
                cost=res;
            res=0;
        }
    return cost;
}

int main ()
{
    int n,m;
    cin>>n>>m;

    arr=(int**) malloc (n*sizeof(int*));
    ever=(bool**) malloc (n*sizeof(bool*));
    for(int i=0; i<n; i++)
    {
        arr[i]=(int*) malloc (m*sizeof(int));
        ever[i]=(bool*) malloc (m*sizeof(bool));
    }

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
            ever[i][j]=false;
        }

    int cost=process(n, m);
    cout<<cost*(cost-1)<<endl;
    return 0;
}