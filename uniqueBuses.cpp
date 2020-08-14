#include<bits/stdc++.h>
using namespace std;
void calc(int arr[],int n)
{
    vector<int> v;
    v.push_back(arr[1]);
    int j=1;
    for(int i=2;i<=n;i++)
    {
        if(i%2==0)
        {
            v.push_back(arr[i]-arr[j]);
        }
        else
        {
            j++;
            v.push_back(arr[i]-arr[j-1]);
        }
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<' ';
    }
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
    calc(arr,n);
}
