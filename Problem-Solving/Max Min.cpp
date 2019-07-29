#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll a[100010];

    ll n, k;

    cin>>n>>k;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a+n);
    ll res=99999999999;
    for(int i=k-1;i<n;i++){
        ll sum=a[i]-a[i-(k-1)];
        res=min(res,sum);
    }

    cout<<res<<endl;

    return 0;
}
