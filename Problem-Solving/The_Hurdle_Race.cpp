#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,x,mx=0;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>x;
        mx=max(mx,x);
    }
    if(mx>k)
        cout<<mx-k<<endl;
    else
        cout<<0<<endl;
    return 0;
}
