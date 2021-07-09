#include <bits/stdc++.h>

using namespace std;

typedef struct
{
    int x=0, y=0;
}note;

int **arr;
bool **ever;
note dot;

int res=0;
void cek(int r, int c, int n, int m, int clue, const int sign)
{
    if((r>=0 && r<n) && (c>=0 && c<m))
        if((!ever[r][c]) && arr[r][c]==clue)
        {
            if (sign==0)
                res++;
            else
                arr[r][c]=0;
            ever[r][c]=true;
            cek(r+1, c, n, m, clue, sign);
            cek(r-1, c, n, m, clue, sign);
            cek(r, c+1, n, m, clue, sign);
            cek(r, c-1, n, m, clue, sign);
        }
}

void process(int n, int m)
{
    int cost=0;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
        {
            if (ever[i][j])
                continue;
            else
                cek(i, j, n, m, arr[i][j], 0);
            
            if(res>cost)
            {
                cost=res;   
                dot.x=i;
                dot.y=j;
            }
            res=0;
        }
}

void swapping (int index, const int r, const int c, int zero=0)
{
    if (index<r)
    {
        if(arr[index][c]==0)
        {
            for(int i=index; i>zero; i--)
                swap(arr[i][c], arr[i-1][c]);
            zero++;
        }
        swapping(index+1, r, c, zero);
    }
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
        
    process(n, m);
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            ever[i][j]=false;
    
    cek(dot.x, dot.y, n, m, arr[dot.x][dot.y], 1);
    for(int i=0; i<m; i++)
        swapping(0, n, i);
        
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(arr[i][j]==0)
                cout<<". ";
            else
                cout<<arr[i][j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}