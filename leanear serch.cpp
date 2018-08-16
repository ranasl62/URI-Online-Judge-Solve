#include<iostream>
using namespace std;
int main()
{
    int n,key;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>key;
    while(--n)
    {
        if(arr[n]==key)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
        cout<<"NO"<<endl;
    return 0;
}
