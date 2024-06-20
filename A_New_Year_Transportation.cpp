#include<bits/stdc++.h>
using namespace std;
#define endl '\n';

signed main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

  int n,t;
  cin>>n>>t;
  vector<int> v;
  v.push_back(0);
  
  for(int i=0;i<n;i++)
   {
    int x;
    cin>>x;
    v.push_back(x);
   }
  int i=1;
  while (1)
  {
    if(i==t)
     {
        cout<<"YES";
        return 0;
     }
    else if(i>t)
     {
        cout<<"NO";
        return 0;
     }
    else 
    {
        i+=v[i];
    }
    
  }
  


  return 0;
}