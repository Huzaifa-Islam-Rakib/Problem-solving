#include<bits/stdc++.h>
using namespace std;
#define endl '\n';

signed main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

  string s;
  string ss;
  cin>>s>>ss;

  for(int i=0;i<s.size();i++)
   {
     if((s[i]=='1' && ss[i]=='0') || (s[i]=='0' && ss[i]=='1'))
       cout<<1;
      else 
       cout<<0;
   }


  return 0;
}