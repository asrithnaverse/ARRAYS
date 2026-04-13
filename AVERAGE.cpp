#include<iostream>
using namespace std;
int main()
{
    int arr[18],i,sum=0,avg;
    for(i=0;i<18;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<18;i++)
    {
        sum+=arr[i];
    }
    avg=(sum)/18;
    cout<<avg;
}
