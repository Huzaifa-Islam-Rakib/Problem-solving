#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<pair<int,int>> s;
    int a ,b;
    
    
    int t ;
    cin >> t;
    
    while(t--)
    {
    
    
    cin >> a>>b;
    
    s.insert({a,b});
    
    
    }
    
    auto it=s.begin();
    
    
    for( ; it!=s.end();it++)
    {
    int temp=(*it).second;
    
    
    it++;
    if(it==s.end())
     break;
     
    if(((*it).second)<temp) 
    {
    cout << "Happy Alex" << endl;
    return 0;
    }
    
    it--;
    
    }
    cout << "Poor Alex" << endl;
      
    return 0;
}