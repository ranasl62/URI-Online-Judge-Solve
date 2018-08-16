#include<iostream>
using namespace std;
int main()
{
    int n,key,pos;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>pos>>key;
    for(int i=n-1;i>=pos;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=key;
    n++;
    for(int i=0;i<n;i++)
        cout<<arr[i]<< " " ;
    return 0;
}
