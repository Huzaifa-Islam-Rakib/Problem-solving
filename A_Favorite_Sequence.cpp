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
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int left=0,right=n-1;

    for(int i=1;i<=n;i++)
    {
        if(i&1)
        {
            cout<<v[left]<<" ";
            left++;
        }
        else 
        {
            cout<<v[right]<<" ";
            right--;
        }
    }

    v.clear();
    cout<<endl;

  }
  


  return 0;
}