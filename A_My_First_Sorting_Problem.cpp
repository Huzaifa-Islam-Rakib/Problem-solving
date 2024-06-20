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

    int a,b;

    while (t--)
    {
        cin>>a>>b;
        cout<<min(a,b)<<" "<<max(a,b)<<endl;
    }
    

  return 0;
}