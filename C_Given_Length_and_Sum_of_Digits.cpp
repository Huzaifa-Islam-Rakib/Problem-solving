#include <bits/stdc++.h>
using namespace std;
int ar[150];
#define endl '\n';
int main() {
    int m,n;
    
    cin >> n>>m;
    int mn,mx=9;
    if(n==1)
    mn=0;
    else
    mn=1;
    mx=9*n;
    if(m<mn || m>mx)
    {
    cout << "-1 -1" << endl;
    
    return 0;
    }
    if(n==1 && m==0)
    
    {
    cout << "0 0" << endl;
    
    return 0;
    }
    int x=m/9;
    int i; 
    for( i=0;i<x;i++)
    {
    
    ar[i]=9;
    }
    int change=i;
    ar[change]=m%9;
    if(ar[change]==0)
    change--;
    
   for(int i=n-1;i>=0;i--)  
    {
    if(ar[n-1]==0 && i==n-1)
     {cout << 1 ;
      continue;
     }
    if(i==change && ar[n-1]==0)
    { cout << ar[i]-1;}
     else
    cout << ar[i];
    }
    cout << " " ;
    for(int i=0;i<n;i++)  
    {
    
    cout << ar[i];
    }
    
    
    return 0;
}
   