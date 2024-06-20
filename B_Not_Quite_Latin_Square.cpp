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

      for(int j=0;j<3;j++)
       {
            cin>>s;

            if(s[0]=='?' || s[1]=='?' || s[2]=='?')
             {
                int ar[3]={0};
                for(int k=0;k<3;k++)
                 {
                    if(s[k]=='A')
                     ar[0]=1;
                    else if(s[k]=='B')
                     ar[1]=1;
                    else if(s[k]=='C')
                     ar[2]=1;
                     
                 }
                if(ar[0]==0)
                 cout<<'A';
                else if(ar[1]==0)
                 cout<<'B';
                else 
                 cout<<"C";
                
                cout<<endl;
                 
             }



       }


   }


  return 0;
}