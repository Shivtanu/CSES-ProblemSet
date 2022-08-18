#include <bits/stdc++.h>
#include<algorithm>
#define ll long long 
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        ll x=min(a,b);
        ll y=max(a,b);
        if((a+b)%3==0 && y<=2*x){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}