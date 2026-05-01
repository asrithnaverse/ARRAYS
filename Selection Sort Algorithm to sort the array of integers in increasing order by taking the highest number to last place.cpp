#include<iostream>
using namespace std;
int main()
{
    int i,j,index;
    int arr[6]={23,45,26,34,12,96};
    for(i=5;i>2;i--)
    {
        index=i;
        for(j=4;j>0;j--)
        {
            if(arr[j]>arr[index])
            {
                index=j;
            }
        }
        swap(arr[index],arr[i]);
    }
    for(i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
}
