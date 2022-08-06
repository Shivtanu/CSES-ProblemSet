#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int in = 0, out = 0;
    int count = 0, curr = 0;
    vector<pair<int, bool>> v;
    for (int i = 0; i < n; i++)
    {
        cin >> in >> out;
        v.push_back(make_pair(in, 0));
        v.push_back(make_pair(out, 1));
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.end()-v.begin(); i++)
    {
        if (v[i].second == 0)
            curr++;
        else
            curr--;
        //cout << v[i].first << " : " << v[i].second << " | count: " << curr << "\n";
        count = max(count, curr);
    }
    cout << count;
    return 0;
}