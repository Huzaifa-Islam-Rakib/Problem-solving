#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   int n;
   for(int i=0;i<t;i++)
    {
        cin>>n;
        int count=0;
        
       while(1)
       {
         if(n<10)
          {
            cout<<count+n<<endl;
            break;

          }
         int times=n/10;
         count+=10*times;
         n-=10*times;
         n+=times;
       }
       
    }
   return 0;
}