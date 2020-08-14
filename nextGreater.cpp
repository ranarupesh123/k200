#include<bits/stdc++.h>
using namespace std;
long int formNumber(int arr[],int n)
{
    long int x=0;
    for(int i=0;i<n;i++)
    {
        x=x*10+arr[i];
    }
    return x;
}
void nextGreatest(int arr[],int n)
{
    int i;
    for(i=n-1;i>0;i--)
    {
        if(arr[i-1]<arr[i])
        {
            break;
        }
    }
    if(i==0)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        int x=arr[i-1];
        int smallest=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]>smallest && arr[j]<arr[smallest])
            {
                smallest=j;
            }
        }
        swap(arr[i-1],arr[smallest]);
        sort(arr+i,arr+n);
        cout<<formNumber(arr,n)<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        nextGreatest(arr,n);
    }
}
