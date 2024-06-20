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
    int a,b,c;
    int count=0;

    while (t--)
    {
        cin>>a>>b>>c;
        count=a;
        if(b==0)
        {
            b=0;
        }
        else if(b<=3)
         {
            count+=1;
            c-=(3-b);
         }
        else 
         {
            count+=b/3;
            
            if(b%3==0)
             b=0;
            else 
             {
                count++;
                b%=3;
                c-=(3-b);
             }
         }
        if(c<0)
         {
            cout<<-1<<endl;
            continue;
         }
        else if(c==0)
        {
            c=0;
        }

        else if(c<=3)
         count++;
        else 
        {
            count+=c/3;
            
            if(c%3==0)
             c=0;
            else 
             {
                count++;
             }
        }
        cout<<count<<endl;
    }
    

  return 0;
}