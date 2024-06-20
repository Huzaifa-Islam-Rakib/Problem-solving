#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    string n;
    cin>>n;
    int i;
    for( i=0;i<n.size();)
     {
        if(n[i]=='1' && n[i+1]=='4' && n[i+2]=='4')
         i+=3;
        else if(n[i]=='1' && n[i+1]=='4')
         i+=2;
         else if(n[i]=='1')
          i++;
        else 
         {
             cout<<"NO";
             return 0;
         }
     }
      
   cout<<"YES";


  return 0;
}