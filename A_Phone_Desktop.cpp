#include<bits/stdc++.h>
using namespace std;
#define endl '\n';
const int N=1e5+10;
int garr[N];
signed main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

    int t;
    cin>>t;

    int x,y;
    
    while (t--)
    {
      cin>>y>>x;
      int count=x/2;
      if(x%2)
       count++;
      
      int space=count*7;
      if(x%2)
       space+=4;
      
      y=max(0,y-space);
      count+=y/15;
      if(y%15!=0)
       count++;
      cout<<count<<endl;
       
    }
    
    

    

  return 0;
}