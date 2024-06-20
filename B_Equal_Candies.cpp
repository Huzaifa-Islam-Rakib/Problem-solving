#include<bits/stdc++.h>
using namespace std;
#define endl '\n';
const int N=1e5+10;
int garr[N];
signed main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int mn=INT_MAX;
        for(int i=0;i<n;i++)
        {
            cin>>garr[i];
            mn=min(garr[i],mn);
        }

        long long count=0;
        for(int i=0;i<n;i++)
         {
            count+=garr[i]-mn;
         }
        cout<<count<<endl;
    }
    

  return 0;
}