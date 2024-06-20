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
    float a,b;
    cin>>a>>b;
    
    if(a<3)
     {
        cout<<1<<endl;
        continue;
     }

    a-=2;
    cout<<ceil(a/b)+1<<endl;
  }
  


  return 0;
}