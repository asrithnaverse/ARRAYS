#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, arr[8],ans,sec_lar;
    for(i=0;i<8;i++)
    {
        cin>>arr[i];
    }
    ans=INT_MIN;
    for(i=0;i<8;i++)
    {
        if(arr[i]>ans)
        {
            ans=arr[i];
        }
    }
    sec_lar=INT_MIN;
    for(i=0;i<8;i++)
    {
        if(arr[i]!=ans && arr[i]>sec_lar)
        {
            sec_lar=arr[i];
        }
    }
    cout<<sec_lar;
}
    
