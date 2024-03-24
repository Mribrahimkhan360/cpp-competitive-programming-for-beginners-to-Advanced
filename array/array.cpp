#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<"Output result : "<<arr[i]<<" ";
    }
    return 0;
}
