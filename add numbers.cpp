#include<iostream>
using namespace std;
int main()
{
    int arr[20],sum=0,i;
    for(i=0; i<20; i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<20;i++)
    {
        sum+=arr[i];
    }
    cout<<sum;
}
