#include<bits/stdc++.h>
using namespace std;
#define endl '\n';
const int N=1e5+10;




signed main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

    string n;
    cin>>n;

    for(long long i=0;i<n.size();i++)
     {
        int a=n[i]-'0';
        if(i==0 && (9-a)==0)
         {
            cout<<a;
            continue;
         }
        if(a>4)
         cout<<9-a;
        else 
         cout<<a;


     }
    

  return 0;
}