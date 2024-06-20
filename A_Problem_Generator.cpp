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
        int n,m;
        string s;
        cin>>n>>m>>s;
        int a,b,c,d,e,f,g;
        a=b=c=d=e=f=g=0;
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
            case 'C':
                c++;
                break;
            case 'D':
                d++;
                break;
            case 'E':
                e++;
                break;
            case 'F':
                f++;
                break;
            default:
                g++;
                break;
            }
         }
        int count=0;
        count+=max(m-a,0);
        //cout<<count<<endl;
        count+=max(m-b,0);
        //cout<<count<<endl;
        count+=max(m-c,0);
        //cout<<count<<endl;
        count+=max(m-d,0);
        //cout<<count<<endl;
        count+=max(m-e,0);
        //cout<<count<<endl;
        count+=max(m-f,0);
        //cout<<count<<endl;
        count+=max(m-g,0);
        cout<<count<<endl;
        
    }
    

  return 0;
}