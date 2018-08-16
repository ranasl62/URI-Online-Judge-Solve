#include<iostream>
using namespace std;
int main()
{
    int n,j,key;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    for(int i=0;i<n;i++)
    {
        j=i-1;

        key=arr[i];
        while(j!=-1 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;

        }
        arr[j+1]=key;
    }
    for (int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    return 0;
}
