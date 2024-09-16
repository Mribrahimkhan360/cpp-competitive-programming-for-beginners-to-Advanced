#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
    if(n<2){
        return false;
    }
    if(n<=3){
        return true;
    }
    for(int i=3;i<=sqrt(n);i++){
        if(n%i==0)return false;
    }
    return true;
}
int main(){
    int t_case;
    cin>>t_case;
    while(t_case--)
    {
        int n;
        cin>>n;
        if (prime(n))
        {
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
}
