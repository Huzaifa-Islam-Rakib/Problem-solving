#include<bits/stdc++.h>
using namespace std;
#define endl '\n';

signed main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

  int n,m;
  cin>>n>>m;

  int ar[51]={0};
 
  for(int i=2;i<=m;i++)
   {
        if(ar[i]==0)
         {
             for(int j=i*i;j<=m;j+=i)
              ar[j]=1;
         }

   }
   if(ar[m]==0)
    {
        bool flag=0;
        for(int i=n+1;i<m;i++)
         {
            if(ar[i]==0)
             {
               
                cout<<"NO"<<endl;
                flag=1;
                break;
             }
         }
        if(flag==0)
         cout<<"YES"<<endl;
    }
    else 
     cout<<"NO"<<endl;

  return 0;
}