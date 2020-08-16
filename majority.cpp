#include<bits/stdc++.h>
using namespace std;
int majority(int arr[],int n)
{
    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(m[arr[i]]>n/2)
        {
            return arr[i];
        }
    }
    return -1;
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
    cout<<majority(arr,n);
}
