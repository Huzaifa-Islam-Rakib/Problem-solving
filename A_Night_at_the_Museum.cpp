#include<bits/stdc++.h>
using namespace std;
#define endl '\n';

signed main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

  string s;
  cin>>s;

  int count=0;
  char c='a';
  for(int i=0;i<s.size();i++)
  {
    int p=abs(s[i]-c);
    int q=min((abs(c-'a')+1+abs('z'-s[i])),(abs('z'-c)+1+abs(s[i]-'a')));
    count+=min(p,q);
    c=s[i];
  }
  cout<<count;


  return 0;
}