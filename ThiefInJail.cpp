#include<bits/stdc++.h>
using namespace std;
int calc(int arr[],int n,int x,int y)
{
    int count=0;
    int i=0;
    while(n)
    {
        if(arr[i]<=x)
        {
            i++;
            count++;
            n--;
        }
        else{
            arr[i]=arr[i]-y;
            count++;
        }
    }
    return count;
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
    int x,y;
    cin>>x>>y;
    cout<<calc(arr,n,x,y);
}
