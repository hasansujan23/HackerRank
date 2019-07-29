#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll a[100];
    ll k,n;

    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a+n);

    ll ck=0,t=0,sum=0;

    for(int i=n-1;i>=0;i--){
        sum+=((ck+1)*a[i]);
        t++;
        if(t%k==0){
            ck++;
        }
    }

    cout<<sum<<endl;

    return 0;
}
