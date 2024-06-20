#include<bits/stdc++.h>
using namespace std;
#define endl '\n';

signed main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

  int n;
  cin>>n;
  vector<int>v;
  v.push_back(0);
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    v.push_back(x);
  }
  if(is_sorted(v.begin(),v.end()))
   {
    cout<<"yes"<<endl;
    cout<<1<<" "<<1<<endl;
    return 0;
   }
  
  int first,last=0;
  for(int i=2;i<=n;i++)
  {
    if(v[i-1]>v[i])
     {
        first=i-1;
        break;
     }
  }
  for(int i=first+1;i<=n;i++)
   {
    if(v[i]>v[i-1])
     {
        last=i-1;
        break;
     }
   }
  if(last==0)
   {
    last=n;
   }
  
  
  sort(v.begin()+first,v.begin()+last+1);

  if(is_sorted(v.begin(),v.end()))
   {
    cout<<"yes"<<endl;
    cout<<first<<" "<<last<<endl;
   }
   else 
   cout<<"no"<<endl;

  return 0;
}