#include<bits/stdc++.h>
using namespace std;

int k[1005];
int u[1005];

int main()
{
    int b,n,m;
    cin>>b>>n>>m;
    for(int i=0;i<n;i++){
        cin>>k[i];
    }
    for(int i=0;i<m;i++){
        cin>>u[i];
    }
    int mx=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(k[i]+u[j]<=b){
                mx=max(mx,(k[i]+u[j]));
            }
        }
    }
    if(mx>0)
        cout<<mx<<endl;
    else
        cout<<"-1"<<endl;
    return 0;
}
