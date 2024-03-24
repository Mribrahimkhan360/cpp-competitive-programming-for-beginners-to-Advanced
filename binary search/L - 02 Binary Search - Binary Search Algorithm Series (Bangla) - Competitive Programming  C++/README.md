<a href="https://www.youtube.com/watch?v=FidXUsTPe9A&list=PL0G2Ga9ALv6nHc7gPqQiJmJiJ4pJlouNc&index=2&ab_channel=wrongsubmission">L - 02: Binary Search | Binary Search Algorithm Series (Bangla) | Competitive Programming | C++
</a>
<br>
<iframe width="560" height="315" src="https://www.youtube.com/embed/FidXUsTPe9A?si=O6FNwC2UeeavbmRT" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" referrerpolicy="strict-origin-when-cross-origin" allowfullscreen></iframe>

<code>
    #include<bits/stdc++.h>
using  namespace  std;
void bs(int ar[],int n,int x)
{
    int l=0;
    int r=n-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(ar[mid]==x)
        {
            cout<<"Found"<<endl;
            cout<<"The Index of X is: "<<mid<<endl;
            return;
        }
        else if(ar[mid]>x)r=mid-1;
        else l=mid+1;
    }
    cout<<"X is Not Found"<<endl;
}
int main()
{
    int n;
    cin>>n;
    int ar[n+3];
    for(int i=0;i<n;i++)cin>>ar[i];
    int x;
    cin>>x;
    bs(ar,n,x);
}

</code>