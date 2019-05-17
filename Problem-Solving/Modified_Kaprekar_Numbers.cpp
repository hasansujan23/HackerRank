#include<bits/stdc++.h>
using namespace std;

long long length(long n){
    n=n*n;
    int ck=0;
    while(n!=0){
        n=n/10;
        ck++;
    }
    return ck;
}

long long kNumber(long long n){
    long long len=ceil(length(n)/2.0);
    long long i=0,sum=0,k=1,r=0;
    n=n*n;
    while(i!=len){
        r=n%10;
        n=n/10;
        sum+=r*k;
        k*=10;
        i++;
    }

    return n+sum;
}

int main()
{
    long long p,q;
    cin>>p>>q;
    //cout<<kNumber(p)<<endl;
    int ck=0;
    for(long long i=p;i<=q;i++){
        int temp=0;
        temp=kNumber(i);
        if(i==temp){
            cout<<i<<" ";
            ck++;
        }
    }
    if(ck==0)
        cout<<"INVALID RANGE";
    cout<<endl;
    return 0;
}
