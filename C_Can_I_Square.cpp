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
  int a;

  for(int i=0;i<t;i++)
   {

        cin>>n;
        long long sum=0;
         for(int j=0;j<n;j++)
          {
            cin>>a;
            sum+=a;
          }
        
        long long p;
        p=sqrt(sum);


        if(p*p==sum)
         {
            cout<<"YES"<<endl;
         }
        else 
         cout<<"NO"<<endl;



   }


  return 0;
}