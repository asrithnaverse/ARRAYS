#include<bits/stdc++.h>
using namespace std;
int main()
{
   int i,arr[8],secondmin,thirdmin,ans;
   for(i=0;i<8;i++)
   {
       cin>>arr[i];
   }
   ans=INT_MAX;
   for(i=0;i<8;i++)
   {
       if(arr[i]<ans)
       {
           ans=arr[i];
       }
   }
   secondmin=INT_MAX;
   for(i=0;i<8;i++)
   {
       if(arr[i]!=ans && arr[i]<secondmin)
       {
           secondmin=arr[i];
       }
   }
   thirdmin=INT_MAX;
   for(i=0;i<8;i++)
   {
       if(arr[i]!=ans && arr[i]!=secondmin && arr[i]<thirdmin)
       {
           thirdmin=arr[i];
       }
   }
   cout<<thirdmin;
}
    
