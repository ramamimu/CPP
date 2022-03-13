#include <stdio.h>
#include <algorithm>
#define ll long long
ll expo[1001], val;
void solve(ll n){
    val=0;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            expo[++val]=0;
            while(n%i==0){
                expo[val]++;
                n/=i;
            }
        }
    }
    if(n!=1)
        expo[++val]=1;
}

int main(){
    ll x, ans=0;
    bool flag=0;
    scanf("%lld", &x);
    if(x<0){
        x=-x;
        flag=1;
    }
    solve(x);
    for(ll i=1;i<=val;i++)
        ans=std::__gcd(ans,expo[i]);
    if(flag)
        while ((!(ans&1))) ans >>=1;
    printf("%lld\n", ans);
}