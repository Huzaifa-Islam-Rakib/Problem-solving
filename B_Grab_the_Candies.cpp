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
    int mihai=0;
    int Bianca =0;
    for(int i=0;i<n;i++)
     {
        int x;
        cin>>x;
        if(x&1)
         Bianca+=x;
        else 
         mihai+=x;
     }
    if(mihai>Bianca)
     {
        cout<<"YES"<<endl;
     }
    else 
     cout<<"NO"<<endl;
  }

  


  return 0;
}