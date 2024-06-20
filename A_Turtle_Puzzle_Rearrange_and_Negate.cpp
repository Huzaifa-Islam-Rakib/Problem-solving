#include<bits/stdc++.h>
using namespace std;

signed main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

  int t;
  cin>>t;

  int n;
  int a;


  for(int i=0;i<t;i++)
   {
    cin>>n;
    int sum=0;
     for(int j=0;j<n;j++)
      {
        cin>>a;
         if(a<0)
          sum-=a;
          else 
           sum+=a;
      }
    cout<<sum<<'\n';
   }


  return 0;
}