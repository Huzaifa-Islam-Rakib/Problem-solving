#include<bits/stdc++.h>
using namespace std;
#define endl '\n';
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void bubbleSortt(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] < arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
signed main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

  int t;
  cin>>t;

  int a,b;

  for(int i=0;i<t;i++)
   {
    cin>>a>>b;
    int ar[a];
    int br[a];
    int sum=0;
    for(int j=0;j<a;j++)
     {
        cin>>ar[j];
        sum+=ar[j];
     }
    for(int j=0;j<a;j++)
     cin>>br[j];
    

    bubbleSort(ar,a);
    bubbleSortt(br,a);


    for(int j=0;j<b;j++)
     {
        if(ar[j]<br[j])
        {
            sum=sum-ar[j]+br[j];
        }

     }
    cout<<sum<<endl;




   }


  return 0;
}