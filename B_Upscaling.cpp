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

  int n;

  bool flag=0;
  bool flagr=0;

  for(int i=0;i<t;i++)
   {


        cin>>n;
        int count=0;
        flag=0;
          for(int j=0;j<2*n;j++) 
           {
                count++;

                flagr=flag;

                for(int k=0;k<n;k++)
                 {
                    if(flagr==0)
                     {
                        flagr=1;
                        cout<<"##";
                     }
                    else 
                     {
                        flagr=0;
                        cout<<"..";
                     }


                 }
                 cout<<endl;



                if(count==2)
                 {
                    if(flag==0)
                     flag=1;
                    else 
                     flag=0;

                    count=0;
                 }

           }





   }


  return 0;
}