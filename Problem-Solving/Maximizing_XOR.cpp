#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l,r,mx=0;
    cin>>l>>r;
    for(int i=l;i<=r;i++){
        for(int j=i+1;j<=r;j++){
            mx=max(mx,(i^j));
        }
    }
    cout<<mx<<endl;
    return 0;
}
