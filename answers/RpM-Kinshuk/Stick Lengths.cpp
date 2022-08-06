#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    int a = 0;
    //unordered_map<int,int> mp;
    vector <int> v;
    for(int i=0;i<n;i++)
    {
        cin >> a;
        v.push_back(a);
        //mp[a]++;
    }
    long long freq = 0;
    /*for(auto e: mp) 
    {
        if(freq < e.second)
        {
            a = e.first;
            freq = e.second;
        }
    }*/
    if(freq<2)
    {
        sort(v.begin(),v.end());
        a = v[n/2];
    }
    freq = 0;
    for(int i=0;i<n;i++)
        freq += abs(v[i]-a);
    cout << freq;
    return 0;
}