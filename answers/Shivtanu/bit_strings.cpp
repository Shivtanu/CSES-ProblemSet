#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007

using namespace std;

int main()
{
    ll n, ans=1;
    cin>>n;
    for(int i=1; i<=n; i++){
        ans=(ans*2)%mod;
    }
    cout<<ans;

    return 0;
}