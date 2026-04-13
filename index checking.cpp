#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of the array";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int ans=-1;
    for(int i=0;i<size;i++)
    {
        if(5==arr[i])
        {
            ans=i;
        }
    }
    cout<<ans;
}
