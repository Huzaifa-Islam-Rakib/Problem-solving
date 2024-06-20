#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int a,b,c;
    
    cin >> t;
    
    while(t--)
    {
    
    cin >> a>>b>>c;
    
    long long p,q,r;
    
    p=b-(c-b);
    q=(a+c);
    r=b+(b-a);
    float x=(a+c)/2;
    if(q%2)
     q=0;
     else
      q=q/2;
    
    if( p>=a && (p%a==0) && p>0)
      cout << "YES" << endl;
    else if( q>=b && (q%b==0) && q>0)
      cout << "YES" << endl;
      
    else if( r>=c && (r%c==0) && r>0)
      cout << "YES" << endl;
      
      
    else
    cout << "NO" << endl;  
      }
      
    return 0;
}