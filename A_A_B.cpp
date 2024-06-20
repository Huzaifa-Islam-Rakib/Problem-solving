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
  int a,b;
  while(t--)
  {
    cin>>s;
    a=stoi(s);
    reverse(s.begin(), s.end());
    b=stoi(s);
    
    cout<<a+b;
    cout<<endl;
  }


  return 0;
}