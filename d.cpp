#include<bits/stdc++.h>
#define int long long int
using namespace std;
signed main()
{
        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        int t,n;
        cin>>t>>n;
        for(int k=1;k<=t;k++)
        {
                int arr[n];
                char c;
                for(int j=0;j<n;j++)
                {
                        cout<<j+1<<endl;
                        cin>>arr[j];
                }
                for(int i=0;i<n;i++)
                {
                        cout<<arr[i];
                }
                cout<<endl;
                cin>>c;
                if(c=='N') break;
                
        }
 return 0;
}
