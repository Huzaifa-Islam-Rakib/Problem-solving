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
    int w,h,n;
    cin>>w>>h>>n;
    int wcount=1;
    
    while (1)
    {
        if(w%2==1 || w==0)
         {
            break;
         }
        wcount*=2;
        w/=2;
    }
    int hcount=1;
    while (1)
    {
        if(h%2==1 || h==0)
         {
            break;
         }
        hcount*=2;
        h/=2;
    }
    
    if(wcount*hcount>=n)
     {
        cout<<"YES"<<endl;
     }
    else 
     cout<<"NO"<<endl;
    
  }
  


  return 0;
}