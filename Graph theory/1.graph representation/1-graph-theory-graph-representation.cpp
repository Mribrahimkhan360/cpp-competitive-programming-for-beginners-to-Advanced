#include<bits/stdc++.h>
using namespace std;
vector<int>v[1000];
int main(){
    int n,m,x,y;
    cin>>n>>m;
    while(m--){
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i=1;i<=n;i++){
        cout<<i;
        for(int j=0;j<v[i].size();j++)cout<<"->"<<v[i][j];
        cout<<endl;
    }
}
