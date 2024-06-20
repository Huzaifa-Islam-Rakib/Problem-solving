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
  while (t--)
  {
    cin>>n;
    vector<int> ar;
    for(int i=0;i<n;i++)
     {
        int x;
        cin>>x;
        ar.push_back(x);
     }
    bool flag=0;
    sort(ar.begin(),ar.end());
    for(int i=0;i<n-1;i++)
     {
        if(ar[i]==ar[i+1])
         {
            cout<<"NO"<<endl;
            flag=1;
            break;
         }
     }
    if(flag==0)
     cout<<"YES"<<endl;
    

  }
  
  


  return 0;
}