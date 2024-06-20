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

  int i=1;
  int sum=0;

  while(1)
  {
    sum+=i;

    if(n-sum<0)
     {
        cout<<i-1;
        break;
     }
    n-=sum;

    i++;
  }
  

  return 0;
}