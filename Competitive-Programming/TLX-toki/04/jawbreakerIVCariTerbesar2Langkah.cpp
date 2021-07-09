#include <bits/stdc++.h>
using namespace std;

int **arr, **copied;
bool **check, **checkSwap;
int n, m;

bool isInvited(int r, int c, int numb, int sign)
{
    if(sign==1)
        if(!check[r][c] && arr[r][c]==numb)
        {
            check[r][c]=true;
            checkSwap[r][c]=true;
            arr[r][c]=0;
            return true;
        }
    if(sign==2)
        if(!checkSwap[r][c] && arr[r][c]==numb)
        {
            checkSwap[r][c]=true;
            return true;
        }
    return false;
}

int first=0, second=0;
void oneByOne(int r, int c, int numb, int sign)
{
    if((r>=0 && r<n) && (c>=0 && c<m))
        if(isInvited(r, c, numb, sign))
        {
            if (sign==1)
                first++;
            else
                second++;
            oneByOne(r+1, c, numb, sign);
            oneByOne(r-1, c, numb, sign);
            oneByOne(r, c+1, numb, sign);
            oneByOne(r, c-1, numb, sign);
        }
}

void swapping(int r, int c, int batas, int zero=0)
{
    if(r<batas)
    {
        if(checkSwap[r][c])
        {
            for(int i=r; i>zero; i--)
            {
                swap(arr[i][c], arr[i-1][c]);
                checkSwap[i][c]=false;
            }
            checkSwap[zero][c]=true;
            zero++;
        }
        swapping(r+1, c, batas, zero);
    }
}

int findMax()
{
    int cost=0;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
        {
            if (checkSwap[i][j])
                continue;
            else
                oneByOne(i, j, arr[i][j], 2);

            if(second>cost)
                cost=second;
            second=0;
        }
    return cost;
}

void recover(int n, int m, int sign)
{
    if(sign==0)
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                checkSwap[i][j]=false;
    else if(sign==1)
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                arr[i][j]=copied[i][j];
}

int main()
{
    cin>>n>>m;
    arr=(int**) malloc (n*sizeof(int*));
    copied=(int**) malloc (n*sizeof(int*));
    check=(bool**) malloc (n*sizeof(bool*));
    checkSwap=(bool**) malloc (n*sizeof(bool*));
    for(int i=0; i<n; i++)
    {
        arr[i]=(int*) malloc(m*sizeof(int));
        copied[i]=(int*) malloc(m*sizeof(int));
        check[i]=(bool*) malloc (m*sizeof(bool));
        checkSwap[i]=(bool*) malloc (m*sizeof(bool));
    }
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
            check[i][j]=false;
            checkSwap[i][j]=false;
            copied[i][j]=arr[i][j];
        }
    
//process
    int comparison=0;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
        {
            if(check[i][j])
                continue;
            oneByOne(i, j, arr[i][j], 1);
            for(int k=0; k<m; k++)
                swapping(0, k, n);
//Find Max  
            if(first!=1)
            {
                int cost=findMax();
                if(comparison<((first*(first-1))+(cost*(cost-1))))
                    comparison=(first*(first-1))+(cost*(cost-1));
            }
            
/* ---------------- DEBUGGING -----------------

            for(int k=0; k<n; k++)
            {
                for(int l=0; l<m; l++)
                {
                    cout<<arr[k][l]<<' ';
                }
                cout<<endl;
            }
            cout<<first*(first-1)<<endl;
            cout<<cost*(cost-1)<<endl;
            cout<<comparison<<endl;

---------------- DEBUGGING ----------------- */
            
            recover(n, m, 0);
            recover(n, m, 1);
            first=0;
        }
    cout<<comparison<<endl;
    free(arr); 
    free(copied); 
    free(check); 
    free(checkSwap); 
    return 0;
}