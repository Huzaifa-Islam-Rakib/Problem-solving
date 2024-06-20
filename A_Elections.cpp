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
    int ar[3];
    for(int i=0;i<3;i++)
     cin>>ar[i];
    int mx=max(ar[0],ar[1]);
    mx=max(mx,ar[2]);
    int count=0;
    for(int i=0;i<3;i++)
     {
        if(mx==ar[i])
         count++;
     }
    
    if(count==1)
     {
        mx++;
        for(int i=0;i<3;i++)
         {
            if(mx-ar[i]==1)
             cout<<0;
            else 
             cout<<mx-ar[i];

            cout<<" ";
             
         }
        cout<<endl;
     }
    else 
    {
        mx++;
        for(int i=0;i<3;i++)
         {
            cout<<mx-ar[i]<<" ";
         }
        cout<<endl;
    }
  }
  


  return 0;
}