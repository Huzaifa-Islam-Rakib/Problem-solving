#include<bits/stdc++.h>
using namespace std;
#define endl '\n';

signed main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

  int a,n;
  cin>>a>>n;

  int ar[n];
  for(int i=0;i<n;i++)
   cin>>ar[i];

  int i, j; 
    for (i = 0; i < n - 1; i++) 
  
      {  // Last i elements are already 
        // in place 
        for (j = 0; j < n - i - 1; j++) 
            {
                if (ar[j] > ar[j + 1]) 
                swap(ar[j], ar[j + 1]); 
            }

         }       


   int last=a-1;
   int mn=INT_MAX;

   int first=0;

   while(last<n)
   {
    int p=ar[last]-ar[first];
    mn=min(mn,p);

    last++;
    first++;
    
   }
   cout<<mn;
   
    

  return 0;
}