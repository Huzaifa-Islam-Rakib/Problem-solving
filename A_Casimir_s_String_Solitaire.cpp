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
    string s;
    cin>>s;
    int a,b,c;
    a=b=c=0;
    for(int i=0;i<s.size();i++)
     {
        switch (s[i])
        {
        case 'A':
            a++;
            break;
        case 'B':
            b++;
            break;
        default:
            c++;
            break;
        }
     }
    if(a+c==b)
     {
        cout<<"YES"<<endl;
     }
    else 
     {
        cout<<"NO"<<endl;
     }
  }
  


  return 0;
}