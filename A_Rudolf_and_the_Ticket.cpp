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

  int a,b,c;

  for(int i=0;i<t;i++)
   {
    cin>>a>>b>>c;
    int ar[a];
    int br[b];
    for(int j=0;j<a;j++)
     cin>>ar[j];
    for(int j=0;j<b;j++)
     cin>>br[j];

    int count=0;
    for(int j=0;j<a;j++)
     {
        for(int k=0;k<b;k++)
         {
            if(ar[j]+br[k]<=c)
             count++;
         }
     }    
    cout<<count<<endl;
   }


  return 0;
}