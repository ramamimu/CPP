#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n];
    int total=0;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        total+= arr[i];
    }
    // cout<<"total = "<<total<<endl;
    if(total%n != 0)
        cout<<"-1"<<endl;
    else
    {
        total/=n;
        int res=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]>total)
                res++;
        }
        cout<<res<<endl;
    }

}

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        solve();
    }
    return 0;
}