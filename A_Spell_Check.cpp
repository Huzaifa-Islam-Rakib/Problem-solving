#include<bits/stdc++.h>
using namespace std;
#define endl '\n';

signed main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

  string s;
  s={"Timur"};
   sort(s.begin(), s.end());

  string ss;

  int t;
  cin>>t;
  int n;

  for(int i=0;i<t;i++)
  {
    cin>>n>>ss;

    if(n!=5)
     {
        cout<<"NO"<<endl;
        continue;

     }
    

        sort(ss.begin(),ss.end());
       if(ss==s)
        {
            cout<<"YES"<<endl;
            continue;
        }
       cout<<"NO"<<endl;

  }


  return 0;
}