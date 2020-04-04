#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    for(int k=1;k<=t;k++)
    {
        cout<<"Case #"<<k<<": ";
        int n;
        cin>>n;
        map<pair<int,int>,queue<int>> dict;
        vector<pair<int,int>> lst;
        int s,e;
        for(int i=0;i<n;i++)
        {
            cin>>s;
            cin>>e;
            dict[{s,e}].push(i);
            lst.push_back({s,e});
        }
        sort(lst.begin(),lst.end());
        int a=0,b=0;
        bool x=true;
        char ans[n];
        for(int i=0;i<n;i++)
        {
            if(a<=lst[i].first)
            {
                a=lst[i].second;
                ans[dict[{lst[i].first,lst[i].second}].front()]='C';
                dict[{lst[i].first,lst[i].second}].pop();
            }
            else if(b<=lst[i].first)
            {
                b=lst[i].second;
                ans[dict[{lst[i].first,lst[i].second}].front()]='J';
                dict[{lst[i].first,lst[i].second}].pop();
            }
            else
            {
                x=false;
                break;
            }
        }
        if(x)
        {
            for(int i=0;i<n;i++)
            {
                cout<<ans[i];
            }cout<<endl;
        }
        else cout<<"IMPOSSIBLE"<<endl;
    }

    return 0;
}
