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
  int v[4];
  while (t--)
  {
    cin>>v[0]>>v[1]>>v[2]>>v[3];
    int mx=0;
    int in;
    for(int i=0;i<4;i++)
     {
        if(mx<v[i])
         {
            mx=v[i];
            in=i+1;
         }
     }
    int mx2=0;
    int in2;
    for(int i=0;i<4;i++)
     {
        if(v[i]==mx)
         continue;
        if(mx2<v[i])
         {
            mx2=v[i];
            in2=i+1;
         }
     }
    if((in<3 && in2>2) || (in2<3 && in>2))
    { 
    cout<<"YES"<<endl;
    }
    else 
     cout<<"NO"<<endl;

  }
  


  return 0;
}