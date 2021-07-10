#include <bits/stdc++.h>

using namespace std;

void getMinMax(int arr[], int index, int *minim, int *maxim)
{
    for(int i=0; i<index; i++)
    {
        if((*minim)>arr[i])
        {
            *minim=arr[i];
            // cout<<arr[i]<<" 1 "<<endl;
        }
        if((*maxim)<arr[i])
        {
            // cout<<arr[i]<<" 2 "<<endl;
            *maxim=arr[i];
        }
    }
}

void upFirstSecond(int a[], int t, int *first, int* second, int minimal, int maximal)
{
    int count1=0, tanda=0;
    for(int i=0; i<t; i++)
    {
        (*first)++;
        if((a[i]==minimal) || (a[i]==maximal))
        {
            tanda++;
        }
        if(tanda==2)
        {
            break;
        }
    }
    tanda=0;
    for(int i=t-1; i>=0; i--)
    {
        (count1)++;
        if((a[i]==minimal) || (a[i]==maximal))
        {
            // cout<<a[i]<<" -- "<<tanda<<endl;
            tanda++;
        }
        if(tanda==2)
        {
            break;
        }
    }
    *first=min(*first, count1);

    for(int i=0; i<t; i++)
    {
        (*second)++;
        if((a[i]==minimal) || (a[i]==maximal))
        {
            break;
        }
    }
    for(int i=t-1; i>=0; i--)
    {
        (*second)++;
        if((a[i]==minimal) || (a[i]==maximal))
        {
            break;
        }
    }

}

int main()
{
    int n;
    cin >> n;
    // vector <int> a;
    for(int i=0; i<n; i++)
    {
        int t;
        cin >>t;
        int a[t]={};
        for(int j=0; j<t; j++)
        {
            int input;
            cin >> input;
            a[j]=input;
        }

        int minimal=INT_MAX, maximal=INT_MIN;
        getMinMax(a, t, &minimal, &maximal);
        int first=0, second=0;
        upFirstSecond(a, t, &first, &second, minimal, maximal);
        int res = min(first, second);
        cout<<res<<endl;
    }
    return 0;
}