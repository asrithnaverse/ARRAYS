#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=n-2;i>=0;i--)
    {
        bool swapped =0;
        for(j=0;j<=i;j++)
        {
            if(arr[j]<arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped=1;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
