#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    long long int count=0;

    int ar[m];
    for(int i=0;i<m;i++)
      cin>>ar[i];
    
    count=ar[0]-1;

    for(int i=1;i<m;i++)
     {
        if(ar[i]>=ar[i-1])
          count+=ar[i]-ar[i-1];
        else 
         {
            count+=(n-ar[i-1])+ar[i];
         }
     }
    cout<<count;

  return 0;
}