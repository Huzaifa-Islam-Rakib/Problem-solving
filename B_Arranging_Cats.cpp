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
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string ss;
        cin>>ss;
        int count=0;
        int countn1=0,countn2=0;
        for(int i=0;i<s.size();i++)
         {
            if(s[i]!=ss[i])
             count++;
            if(s[i]=='1')
             countn1++;
            if(ss[i]=='1')
             countn2++;
         }
        countn1=abs(countn1-countn2);
        count-=countn1;
        cout<<count/2+countn1<<endl;
    }
    

  return 0;
}