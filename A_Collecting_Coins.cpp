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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    long sum=a+b+c+d;
    long sum2=sum/3;
    if(sum%3!=0 || sum2-a<0 || sum2-c<0 ||sum2-b<0 )
     {
        cout<<"NO"<<endl;
        
     }
    else 
     cout<<"YES"<<endl;
    
  }
  


  return 0;
}