#include<bits/stdc++.h>
using namespace std;
int sumOfLeaders(int arr[],int n)
{
    int max=arr[n-1];
    int sum=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            sum=sum+max;
        }
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<sumOfLeaders(arr,n);
}
