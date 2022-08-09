#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    long long arr[n];
    long long maxsum = -1e10, curr = 0, maxint = -1e10;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        curr += arr[i];
        if(curr < 0) curr = 0;
        maxsum = max(maxsum,curr);
        maxint = max(maxint,arr[i]);
    }
    if(maxint < 0) cout << maxint;
    else cout << maxsum;
    return 0;
}