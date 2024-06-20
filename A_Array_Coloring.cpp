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
    int n;
    cin>>n;
    int odd=0;
    for(int i=0;i<n;i++)
     {
        int x;
        cin>>x;
        if(x&1)
         odd++;
     }
    if(odd&1)
    { cout<<"NO"<<endl;}
    else 
     cout<<"YES"<<endl;
  }
  


  return 0;
}