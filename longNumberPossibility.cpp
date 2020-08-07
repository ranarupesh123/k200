#include<bits/stdc++.h>
using namespace std;
int calc(int arr[],int n)
{
    for(int i=n;i>=1;i--)
    {
        if(arr[i]<=8)
        {
            return i;
        }
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    cout<<calc(arr,n);
}
