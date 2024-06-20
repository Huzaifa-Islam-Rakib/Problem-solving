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
    map<string,int>s;

    while(t--)
     {
        string ss;
        cin>>ss;

        if(s[ss]==0)
        { cout<<"OK"<<endl;}
        else 
         {
            cout<<ss<<s[ss]<<endl;
         }

        s[ss]++;





     }

  return 0;
}