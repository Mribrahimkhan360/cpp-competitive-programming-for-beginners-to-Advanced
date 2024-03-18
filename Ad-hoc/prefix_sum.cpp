#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;

    cin>>N;
    int arr[N+1];

    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    int pre[N+1];

    pre[0] = arr[0];

    for(int i=1;i<N;i++)
    {
        pre[i] = pre[i-1] + arr[i];

    }

    int Q;
    cin>>Q;
    while(Q--)
    {
        int l,r;
        cin>>l>>r;
        if(l==0)
        {
            cout<<pre[r]<<endl;
        }
        else{
            cout<<pre[r] - arr[l-1]<<endl;
        }
    }
}
