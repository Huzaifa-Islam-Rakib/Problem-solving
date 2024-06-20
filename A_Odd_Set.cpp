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
    int p=2*n;
    int odd=0;
    int ar[2*n];
    for(int i=0;i<p;i++)
     {
        cin>>ar[i];
     }
    for(int i=0;i<p;i++)
     {
        if(ar[i]%2)
        odd++;
     }
    if(odd==2 && n==1)
     {
        cout<<"No"<<endl;
        continue;
     }

    if(odd%n==0  && odd>=n )
{     cout<<"Yes"<<endl;
}    else 
     cout<<"No"<<endl;
  }
  


  return 0;
}