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
    string s;
    cin>>s;
    bool flag=0;
    int a,b;
    a=b=0;
    for(int i=0;i<s.size();i++)
    {
        switch (s[i])
        {
        case 'U':
            b++;
            break;
        case 'D':
            b--;
            break;
        case 'L':
            a--;
            break;
        default:
            a++;
            break;
        }
        if(a==1 && b==1 && flag==0)
         {
            cout<<"YES"<<endl;
            flag=1;
         }
    }
    if(flag==0)
     {
        cout<<"NO"<<endl;
     }
  }
  


  return 0;
}