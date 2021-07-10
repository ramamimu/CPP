//800
#include <bits/stdc++.h>

using namespace std;

int process(int w, int h, int count)
{
    while((w%2==0 || h%2==0))
    {
        if(w%2==0)
            count++, w/=2;
        if(h%2==0)
            count++, h/=2;
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    int w, h, n;
    for(int i=0; i<t; i++)
    {
        int count=0;
        cin >> w
            >> h
            >> n;
        
        count=process(w, h, count);
        count = pow(2, count);
        if(count<n)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}