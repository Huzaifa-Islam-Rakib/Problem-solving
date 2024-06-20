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
    int k=n/2;
    int count=0;
    for(int i=1;i<k;i++)
     {
        count+=pow(2,i);
     }
    count+=pow(2,n);
    for(int i=k;i<n;i++)
     {
        count-=pow(2,i);
     }
    cout<<abs(count)<<endl;
  }
  


  return 0;
}