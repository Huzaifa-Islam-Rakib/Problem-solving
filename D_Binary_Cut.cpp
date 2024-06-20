#include<bits/stdc++.h>
using namespace std;
#define endl '\n';
const int N=1e5+10;
int garr[N];
signed main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

    int t;
    cin>>t;
    string s;

    while (t--)
    {
        cin>>s;
        int count=0;
        int flag=1;
        for(int i=0;i<s.size()-1;i++)
         {
            if(s[i]!=s[i+1])
             {
                count++;
                if(s[i]=='0' && flag==1)
                 {
                    count--;
                    flag=0;
                 }
             }
         }
        count++;
        cout<<count<<endl;
    }
    

  return 0;
}