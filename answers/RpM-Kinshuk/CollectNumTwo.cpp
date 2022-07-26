#include<bits/stdc++.h>
using namespace std;

/*void count(int n)
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
}*/

/*int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a=0,b=0,n=0; cin>>n;
    //count(n); return 0;
    int t=0; cin>>t;
    //Inefficient approach but more universal
    vector<pair<int,int>> v,psv;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(make_pair(a,i+1));
    }
    while(t--)
    {
        cin>>a>>b;
        if(n==1)
        {
            cout<<1; continue;
        }
        swap(v[a-1].second,v[b-1].second);
        swap(v[a-1],v[b-1]);
        psv=v;
        //for(auto e: psv) cout<<e.first<<": "<<e.second<<"\n";
        sort(psv.begin(),psv.end());
        a=1;
        for(int i=1;i<n;i++)
        {
            if(psv[i].second<psv[i-1].second)
                a++;
        }
        cout<<a<<"\n";
    }
}*/

//Efficient approach

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,t; cin>>n>>t;
    int v[n],idx[n+1]; idx[0]=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        idx[v[i]]=i+1;
    }
    int cnt=1;
    for(int i=1;i<=n;i++)
        {
            if(idx[i]<idx[i-1]) cnt++;
        }
    //cout<<cnt<<endl<<endl;
    while(t--)
    {
        int a,b; cin>>a>>b;

        a--; b--;

        /*for(int i=0;i<=n;i++) cout<<i<<": "<<idx[i]<<"\n";

        //if(v[a]>0)
        if(idx[v[a]]<idx[v[a]-1])
        {
            cout<<"A less dec\n";
            cnt--;
        }

        if(v[a]<n)
        if(idx[v[a]]>idx[v[a]+1])
        {
            cout<<"A more dec\n";
            cnt--;
        }

        //if(v[b]>0)
        if(idx[v[b]]<idx[v[b]-1])
        {
            cout<<"B less dec\n";
            cnt--;
        }

        if(v[b]<n&&v[b]!=v[a+1]&&v[b]!=v[a]+1)
        if(idx[v[b]]>idx[v[b]+1])
        {
            cout<<"B more dec\n";
            cnt--;
        }

        swap(idx[v[a]],idx[v[b]]);
        swap(v[a],v[b]);

        for(int i=0;i<n;i++) cout<<v[i]<<" "; cout<<"\n";
        for(int i=0;i<=n;i++) cout<<i<<": "<<idx[i]<<"\n";

        //if(v[a]>0)
        if(idx[v[a]]<idx[v[a]-1])
        {
            cout<<"A less inc\n";
            cnt++;
        }

        if(v[a]<n)
        if(idx[v[a]]>idx[v[a]+1])
        {
            cout<<"A more inc\n";
            cnt++;
        }

        //if(v[b]>0)
        if(idx[v[b]]<idx[v[b]-1])
        {
            cout<<"B less inc\n";
            cnt++;
        }

        if(v[b]<n&&v[b]!=v[a+1]&&v[b]!=v[a]+1)
        if(idx[v[b]]>idx[v[b]+1])
        {
            cout<<"B more inc\n";
            cnt++;
        }*/

        set <pair<int,int>> st;
        
        st.insert({v[a]-1,v[a]});
        if(v[a]<n) st.insert({v[a],v[a]+1});

        st.insert({v[b]-1,v[b]});
        if(v[b]<n) st.insert({v[b],v[b]+1});

        for(auto sw: st)
        {
            if(idx[sw.first]>idx[sw.second]) cnt--;
        }

        swap(idx[v[a]],idx[v[b]]);

        swap(v[a],v[b]);

        for(auto sw: st)
        {
            if(idx[sw.first]>idx[sw.second]) cnt++;
        }
        st.clear();
        cout<<cnt<<"\n";
    }
    return 0;   
}

/*
5 3
4 2 1 5 3
2 3
1 5
2 3
*/