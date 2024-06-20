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
    int i=64;
    string s;
    while (i--)
    {
        char c;
        cin>>c;
        if(c!='.')
         {
            s.push_back(c);
         }
    }
    cout<<s<<endl;
    s.clear();
    
  }
  


  return 0;
}