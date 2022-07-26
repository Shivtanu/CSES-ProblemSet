#include<bits/stdc++.h>
using namespace std;

void count(int n)
{
    vector<int> v(n+1);
    int nct = 0;
    for(int i=0;i<n;i++)
    {
        cin>>nct;
        v[nct]=i;
    }
    if(n==1)
    {
        cout<<1; return;
    }
    nct=1;
    for(int i=2;i<=n;i++)
    {
        if(v[i]<v[i-1]) nct++;
    }
    cout<<nct; return;
}

int main()
{
    int a=0,n=0; cin>>n;
    count(n); return 0;

    //Inefficient approach but more universal
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(make_pair(a,i+1));
    }
    if(n==1)
    {
        cout<<1; return 0;
    }
    sort(v.begin(),v.end());
    a=1;
    for(int i=1;i<n;i++)
    {
        if(v[i].second<v[i-1].second)
            a++;
    }
    cout<<a; return 0;
}