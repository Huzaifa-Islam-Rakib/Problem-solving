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
  while (t--)
  {
    int n,a,b;
    cin>>n>>a>>b;
    string s;
    for(int i=0;i<b;i++)
     {
       char c='a'+i;
       s.push_back(c);
     }
    
    int p,q;
    p=n/b;
    q=n%b;

    for(int i=0;i<p;i++)
    cout<<s;
    for(int i=0;i<q;i++)
     cout<<s[i];

    cout<<endl;
    s.clear();
  }
  


  return 0;
}