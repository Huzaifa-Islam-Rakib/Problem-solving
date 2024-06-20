#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

  int n;
  string s;
  cin>>n>>s;

 
  
    int ans;
    int mx=0;
  for(int i=0;i<n-1;i++)
   {
      int count=0;
      
        for(int j=i;j<n-1;j++)
         {
            if(s[i]==s[j] && s[i+1]==s[j+1])
             count++;
             
         }
        if(count>mx)
         {
            ans=i;
            mx=count;
         }
   }
   cout<<s[ans]<<s[ans+1];

  return 0;
}