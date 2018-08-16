#include<bits/stdc++.h>
using namespace std;
/*int lcm(int a, int b)
{
    if(a<b)
        lcm(b,a);
        if(b==0)
            return a;
    return lcm(b,a%b);
}
int main()
{
    int a,b;
    cin>>a>>b;
   cout<< lcm(a,b);
    return 0;
*/
/*int main()
{
    int arr[]={8,9,6,3,2,5,4,1,78,10};
    for(int i=0;i<sizeof(arr)/sizeof(int);i++)
    {
        int min=i;
        for(int j=i+1;j<sizeof(arr)/sizeof(int);j++){
            if(arr[min]>sarr[j])
            min=j;}
        swap(arr[i],arr[min]);
    }
    for(int i=0;i<sizeof(arr)/sizeof(int);i++)
        cout<<arr[i]<<" ";
    return 0;
}*/
/*{
    int arr[]={3,2,6,5,9,8,7,4,1,10};
    int key ;
    for(int i=0;i<sizeof(arr)/sizeof(int);i++)
    {
       int j=i-1;
       key=arr[i];
       while(j!=-1&&arr[j]>key)
       {
           arr[j+1]=arr[j--];
       }
       arr[j+1]=key;

    }
    for(int i=0;i<sizeof(arr)/sizeof(int);i++)
            cout<<arr[i]<<" ";
    return 0;
}*/
/*int fib(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    return fib(n-1)+fib(n-2);

}
int main()
{
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
    return 0;
}*/

/*int product(int n)
{

    if(n==0)
        return 1;
       return n%10*product(n/10);
}
int main()
{
    int n;
    cin>>n;
    cout<<product(n)<<endl;
}
*/
/*void call (int *b , int *a , int *t)
{
    *t = *b;
    *b = *a;
    *a = *t;
}
int main()
{
    int a=12, b=-90 , t=19;
    call(&a,&b,&t);
    printf("a =%d b = %d t = %d\n",a,b,t);
    call(&a,&b,&t);
    printf("a =%d b = %d t = %d\n",a,b,t);
    return 0;
}*/
int fib(int n)
{
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    int ret = 2*(fib(n-1)+fib(n-2));
    printf("%d\n",ret);
    return ret;
}
int main()
{

    cout<<fib(5)<<endl;
}
