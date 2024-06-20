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
        int n,m;
        cin>>n>>m;
        if(n<m)
         {
            cout<<"No"<<endl;
            continue;
         }
        else 
         {
            n-=m;
            if(n%2)
             cout<<"No";
            else 
             cout<<"Yes";
            cout<<endl;
         }
        
    }
    

  return 0;
}