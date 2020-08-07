#include<bits/stdc++.h>
using namespace std;
bool isJumping(int curr)
{
    int last_digit=curr%10;
    curr=curr/10;
    while(curr!=0)
    {
        int next_digit=curr%10;
        if(abs(next_digit-last_digit)!=1)
        {
            return false;
        }
        last_digit=next_digit;
        curr=curr/10;
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        if(i<=9)
        {
            cout<<i<<" ";
        }
        else
        {
            int curr=i;
            if(isJumping(curr))
            {
                cout<<curr<<" ";
            }
        }
    }
}
