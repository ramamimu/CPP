#include <bits/stdc++.h>

using namespace std;

void printPath(int temp, int a)
{
    if(temp==a)
    {
        return;
        // cout<<temp<<" ";
    }
    else
    {
        if(temp%10==1)
        {
            temp-=1;
            temp/=10;
        }
        else if(temp%2==0)
        {
            temp/=2;
        }
        printPath(temp, a);
        cout<<temp<<" ";
    }
}

int main()
{
    int a, b;
    cin >> a
        >> b;
    int temp=b;
    int count=0;
    while(b>a)    
    {
        count++;
        if(b%10==1)
        {
            b-=1;
            b/=10;
        }
        else if(b%2==0)
        {
            b/=2;
        }
        else
        {
            break;
        }
        // cout<<b<<" "<<endl;
    //    steps.push_back(b);
    }

    if(b==a)
    {
        cout<<"YES"<<endl
            <<count+1<<endl;
        printPath(temp, a);
        cout<<temp<<endl;
    }
    else
        cout<<"NO\n";

    return 0;
}