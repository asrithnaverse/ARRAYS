#include<iostream>
using namespace std;
int main()
{
    char ch;
    char arr[26];
    for(int i=0;i<26;i++)
    {
        ch=97+i;
        arr[i]=ch;
        cout<<arr[i]<<endl;
    }
}
    
