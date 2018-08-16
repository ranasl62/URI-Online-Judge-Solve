#include<iostream>
using namespace std;
int main()
{
    int n,pos;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>pos;
    for(int i=pos;i<n;i++)
    {
        arr[i]=arr[i+1];
    }

    n--;
    for(int i=0;i<n;i++)
        cout<<arr[i]<< " " ;
    return 0;
}
