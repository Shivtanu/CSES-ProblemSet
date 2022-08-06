#include<bits/stdc++.h>
using namespace std;

int check(int ends, vector<pair<int,int>> &v,int i, int en)
{
    if(i==en)
    {
        if(v[i].first >= ends) return 1;
        return 0;
    }
    if(i==0) return max((check(v[i].second,v,i+1,en)+1),check(0,v,i+1,en));
    if(v[i].first < ends) return check(ends,v,i+1,en);
    return max((check(v[i].second,v,i+1,en)+1),check(ends,v,i+1,en));
}   //Recursive function (slower)

bool cmp(pair<int,int> &a, pair <int,int> &b)
{
    return a.second<b.second;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    vector <pair<int,int>> p(n);
    for(int i=0;i<n;i++)
    {
        cin>>p[i].first;
        cin>>p[i].second;
    }
    sort(p.begin(),p.end(),cmp);
    //cout << check(0,p,0,n-1);
    int c = 0, en = 0;
    for(int i = 0; i < n; i++)
    {
        if(p[i].first<en) continue;
        en = p[i].second;
        c++;
    }   //greedy algo
    cout << c;
    return 0;
}