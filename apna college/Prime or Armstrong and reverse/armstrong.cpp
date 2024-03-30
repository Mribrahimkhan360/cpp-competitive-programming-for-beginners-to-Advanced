#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum;
    int originaln=n;
    cin>>n;
    while(n>0)
    {
        int lastdigit = n%10;
        sum+=pow(lastdigit, 3);
        n=n/10;
    }

    if(sum==originaln)
    {
        cout<<"Armstrong"<<endl;
    }
    else{
        cout<<"not Armstrong"<<endl;
    }
    return 0;
}
