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
    int a,b,c;
    cin>>a>>b>>c;
    int mn=INT_MAX;

    for(int i=0;i<=20;i++)
     {
        int k=abs(a-i)+abs(b-i)+abs(c-i);
        if(k<mn)
         {
            mn=k;
         }
        
     }
    cout<<mn<<endl;
  }
  


  return 0;
}