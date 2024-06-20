#include<bits/stdc++.h>
using namespace std;
#define endl '\n';

signed main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

  int t;
  cin>>t;

  string s;

  for(int i=0;i<t;i++)
    {
        cin>>s;
        if(s[0]=='a' || s[1]=='b' || s[2]=='c')
          cout<<"YES";
        else 
          cout<<"NO";
        cout<<endl;
    }


  return 0;
}