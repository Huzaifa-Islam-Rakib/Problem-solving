#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count=0;
    
    for(int i=0;1;i++)
     {
         if(n==0)
          break;
        
        if(n%2==0)
         {
             n/=2;
         }
        else 
         {
             count++;
             n--;
             n/=2;
         }
     }



    cout<<count;


  return 0;
}