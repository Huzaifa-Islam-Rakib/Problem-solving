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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        a-=c;
        b-=d;
        a*=a;
        b*=b;
        cout<<max(a,b)<<endl;
        cin>>a>>b>>c>>d;
    }
    

  return 0;
}