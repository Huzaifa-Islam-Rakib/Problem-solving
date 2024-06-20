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

  int n;
  int p;

  for(int i=0;i<t;i++)
   {
    cin>>n;
    p=n/3;
    if(n%3==0)
    { cout<<p<<" "<<p<<endl;}
    else if(n%3==1)
     {
        cout<<p+1<<" "<<p<<endl;
     }
    else 
     {
        cout<<p<<" "<<p+1<<endl;
     }
   }


  return 0;
}