#include<bits/stdc++.h>
using namespace std;
#define endl '\n';

signed main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

  int arr[4];
  for(int i=0;i<4;i++)
   cin>>arr[i];
  int n;
  cin>>n;

  int ar[n+1]={0};

  for(int i=0;i<4;i++)
  {
        for(int j=arr[i];j<=n;j+=arr[i])
         {
            ar[j]=1;
         }
  }
  int count=0;
  for(int i=1;i<=n;i++)
   {
    if(ar[i])
     count++;
   }
  cout<<count;


  return 0;
}