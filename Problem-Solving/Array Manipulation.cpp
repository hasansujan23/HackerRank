#include<bits/stdc++.h>
using namespace std;

long long arr[10000010];

long long solve(long long n){
    long long mx=0;
    for(long long i=1;i<=n;i++){
        arr[i]+=arr[i-1];
        mx=max(mx,arr[i]);
    }
    return mx;
}

int main()
{
    long long n,m;
    cin>>n>>m;
    for(long long i=0;i<m;i++){
        long long a,b,k;
        cin>>a>>b>>k;

        arr[a]+=k;
        arr[b+1]-=k;
    }

    cout<<solve(n)<<endl;

    return 0;
}
