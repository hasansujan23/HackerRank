#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q,n,k,sum=0;
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>n>>k;
        int x;
        for(int j=0;j<n;j++){
            cin>>x;
            if(x<=0)
                sum++;
        }
        if(sum>=k)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
        sum=0;
    }
    return 0;
}
