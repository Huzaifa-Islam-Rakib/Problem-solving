#include<bits/stdc++.h>
using namespace std;
#define endl '\n';
const int N=1e5+10;
int Global[N];
signed main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

    int t;
    cin>>t;
    while (t--)
    {
        string s;
        string ss;
        cin>>s>>ss;
        swap(s[0],ss[0]);
        cout<<s<<" "<<ss<<endl;
    }
    


return 0;
}