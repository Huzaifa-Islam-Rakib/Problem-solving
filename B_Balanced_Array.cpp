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
    n/=2;
    if(n%2==1) 
     {
        cout<<"NO"<<endl;
        continue;;
     }
    else 
    {
        cout<<"YES"<<endl;
    }
    n*=2;

    for(int i=1;i<=n/2;i++)
     cout<<i*2<<" ";
    
    int rest=(n/2)-1;
    int i;
    for( i=1;i<n/2;i++)
     {
        cout<<2*i-1<<" ";
     }
    cout<<(i*2)+rest;
    cout<<endl;
  }
  


  return 0;
}