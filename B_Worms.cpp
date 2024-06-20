#include<bits/stdc++.h>
using namespace std;
#define endl '\n';
const int N=1e5+10;
int garr[N] {1};
signed main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

    int t;
    cin>>t;

    vector<int> v;

    v.push_back(0);

    int n,i=1;

    while (t--)
    {
       cin>>n;
       vector<int> s(n,i);
       
       v.insert(v.end(), s.begin(), s.end());

       i++;

    }


    cin>>n;

    while(n--)
     {
      cin>>t;
      cout<<v[t]<<endl;
     }

  
    


  return 0;
}