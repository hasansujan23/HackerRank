#include<bits/stdc++.h>
using namespace std;
#define M 1000010

typedef long long ll;

ll ranks[M];
ll mark[M];
ll alice[M];

ll binarySearch(ll key,ll n){
    ll low=0,high=n-1;

    while(low<=high){
        ll mid=(low+high)/2;

        if(mark[mid]==key)
            return mid;
        else if(mark[mid]<key && mark[mid-1]>key)
            return mid;
        else if(mark[mid]>key && mark[mid+1]<=key)
            return mid+1;
        else if(mark[mid]<key)
            high=mid-1;
        else if(mark[mid]>key)
            low=mid+1;
    }

    return -1;
}

int main()
{
    ll n,m;
    cin>>n;
    ranks[0]=1;
    for(int i=0;i<n;i++){
        cin>>mark[i];

        if(i>0){
            if(mark[i-1]==mark[i]){
                ranks[i]=ranks[i-1];
            }
            else{
                ranks[i]=ranks[i-1]+1;
            }
        }
    }

    cin>>m;

    for(int i=0;i<m;i++){
        cin>>alice[i];
    }

    ll res[m+5];

    for(int i=0;i<m;i++){
        if(alice[i]>mark[0]){
            res[i]=ranks[0];
        }
        else if(alice[i]<mark[n-1]){
            res[i]=ranks[n-1]+1;
        }
        else{
            ll val=binarySearch(alice[i],n);
            res[i]=ranks[val];
        }
    }

    for(int i=0;i<m;i++){
        cout<<res[i]<<endl;
    }

    return 0;
}
