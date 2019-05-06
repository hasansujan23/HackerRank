#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int ma=0,mo=0,mx=0;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if((i&j)<k){
                ma=max(ma,i&j);
            }
            if((i|j)<k){
                mo=max(mo,i|j);
            }
            if((i^j)<k){
                mx=max(mx,i^j);
            }
        }
    }

    cout<<ma<<endl;
    cout<<mo<<endl;
    cout<<mx<<endl;

    return 0;
}
