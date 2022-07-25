/*#include<bits/stdc++.h>
using namespace std;

template <typename T>
void swop(T &a, T &b)
{
    T c = std::move(a);
    a = std::move(b);
    b = std::move(c);
}

int split(vector <pair<int,int>> &arr, int l, int r)
{
    auto pivot = arr[r];
    int i = l-1;
    for(int j = l; j < r; j++)
    {
        if(arr[j].first<pivot.first)
        {
            i++;
            swop(arr[i],arr[j]);
        }
    }
    swop(arr[++i],arr[r]);
    return i;
}

void qsrt(vector <pair<int,int>> &arr, int l, int r)
{
    if(l<r)
    {
        int pi = split(arr, l , r);
        qsrt(arr, l, pi-1);
        qsrt(arr, pi+1, r);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n = 0, x = 0;
    cin >> n >> x;
    vector<pair<int,int>> arr(n);
    //int *arr = new int[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i].first;
        arr[i].second = i+1;
    }
    //sort(arr,arr+n);
    qsrt(arr,0,--n);
    int i = 0;
    while(i<n)
    {
        //cout << arr[i].first << " " << arr[n].first << "\n";
        int sum = arr[i].first+arr[n].first;
        //cout << "Sum is: " << sum << "\n";
        if(sum==x)
        {
            cout << arr[i].second << " " << arr[n].second;
            return 0;
        }
        if(sum>x) n--;
        else i++;
    }
    cout << "IMPOSSIBLE";
    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,x; cin>>n>>x;
    vector <pair<int,int>> v;
    for(i=0;i<n;i++)
    {
        int a; cin>>a;
        v.push_back(make_pair(a,i+1));
    }
    sort(v.begin(),v.end());
    i=0; n--;
    while(i<n)
    {
        int sum = v[i].first+v[n].first;
        if(sum==x)
        {
            cout<<v[i].second<<" "<<v[n].second;
            return 0;
        }
        if(sum>x) n--;
        else i++;
    }
    cout<<"IMPOSSIBLE";
    return 0;
}