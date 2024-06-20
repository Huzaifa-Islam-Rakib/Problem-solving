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
  int a,b;

  long sum;

  while (t--)
  {
    cin>>a>>b;
    sum=a+b;
    if(sum%2)
    { cout<<"Alice"<<endl;}
    else 
     cout<<"Bob"<<endl;
  }
  


  return 0;
}