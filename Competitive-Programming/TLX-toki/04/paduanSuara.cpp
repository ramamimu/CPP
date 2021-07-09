#include <bits/stdc++.h>

using namespace std;

void process(int arr[],const int n,const int m, const int divider, int x, int mod)
{
    if(x==mod)
    {
        if(x)
            return;
     
        for(int i=1; i<m; i++)
            cout<<
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    int m;
    cin>>m;
    int divider=n/m;
    int mod=n%m;
    sort(arr, arr+n);
    process(arr, n, m, divider, 0, mod);
    return 0;
}