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
  int ar[n];
  

  int even=0,odd=0;

  for(int i=0;i<n;i++)
  {
    cin>>ar[i];
    if(ar[i]&1)
     {
        odd++;
     }
    else 
     even++;
  }

  if(odd==1)
   {
     for(int i=0;i<n;i++)
      {
        if(ar[i]&1)
        {
            cout<<i+1;
            break;
        }
      }
   }
  
  else
  {
    for(int i=0;i<n;i++)
      {
        
        if(ar[i]%2==0)
        {
            cout<<i+1;
            break;
        }
      }
  }

  return 0;
}