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
        bool flag=0;
        int temp;
        for(int i=0;i<s.size()-1;i++)
         {
            if(s[i]!=s[i+1])
             {
                temp=i;
                flag=1;
                break;
             }

         }
        if(flag)
         {
            cout<<"YES"<<endl;
            char c=s[temp];
            s[temp]=s[temp+1];
            s[temp+1]=c;
            cout<<s<<endl;
         }
        else 
         cout<<"NO"<<endl;
    }
    

    
    

  return 0;
}