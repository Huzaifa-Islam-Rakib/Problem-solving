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

 string s;

 for(int i=0;i<t;i++)
 {

    cin>>s;
    
    int a;
    bool flag=0;
    string h;
    h+=s[0];
    h+=s[1];
    a=stoi(h);
    
    if(h=="00")
     {
        h="12";
        
     }
    else if(a>12)
     {
        a-=12;
        flag=1;
     }
    else if(a==12)
    {
        flag=1;
    }
    
    if(flag==0)
     {
        cout<<h<<":"<<s[3]<<s[4]<<" "<<"AM";
     }
    else 
     {
        if(a<10)
         {
            cout<<0;
         }
        cout<<a<<":"<<s[3]<<s[4]<<" "<<"PM";
     }
    



    cout<<endl;
 }


  return 0;
}