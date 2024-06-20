#include<iostream>
using namespace std;
int main()
{
    short t,p;
    long present=0;
    cin>>t;
    long m;
    for(int i=0;i<t;i++)
    {
        cin>>p;
        present-=p;
        cin>>p;
        present+=p;
        m=max(m,present);


    }
    cout<<m;


    return 0;
}