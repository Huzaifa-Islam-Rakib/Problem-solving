#include<bits/stdc++.h>
using namespace std;

int main()
{
    string p;
    int a,b,c,d;
    
    cin>>a>>b>>c>>d>>p;

   long  long int cal=0;

    while(p.size())
     {
      
        char last=p[0];

        switch (last)
        {
        case '1':
          cal+=a;
          break;
        case '2':
          cal+=b;
          break;

        case '3': 
          cal+=c;
          break;
        
        default:
               cal+=d;
                 break;
        }



      p.erase(0,1);
        
     }
     cout<<cal;


  return 0;
}